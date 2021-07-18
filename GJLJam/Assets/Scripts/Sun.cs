using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sun : MonoBehaviour
{
    RestartLogic logic;
    public float startScale;
    public float endScale;
    public float thresholdTime;
    private float initialMinFalloff;
    private float initialMaxFalloff;
    private AudioSource audioS;
    private bool imploding = false;
    private float implodeStartScale;
    private float implodeTime;
    // Start is called before the first frame update
    void Start()
    {
        logic = FindObjectOfType<RestartLogic>();
        audioS = GetComponent<AudioSource>();
        initialMinFalloff = audioS.minDistance;
        initialMaxFalloff = audioS.maxDistance;
    }

    // Update is called once per frame
    void Update()
    {
        if (imploding)
        {
            implodeTime -= Time.deltaTime;
            float t = implodeTime / 4f;
            transform.localScale = Vector3.one * Mathf.Lerp(0, implodeStartScale, t);
            audioS.volume = t;
        }
        else
        {
            if (logic.GetTime() <= thresholdTime)
            {
                float t = 1 - (logic.GetTime() / thresholdTime);
                transform.localScale = Vector3.one * Mathf.LerpUnclamped(startScale, endScale, t);
                audioS.minDistance = Mathf.LerpUnclamped(startScale, endScale, t); ;
                audioS.maxDistance = initialMaxFalloff + Mathf.LerpUnclamped(startScale, endScale, t); ;
            }
        }
    }

    //Get burned by the reactor.
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            FindObjectOfType<RestartLogic>().StartRestart();
        }
    }

    public void Implode()
    {
        implodeStartScale = transform.localScale.x;
        imploding = true;
        implodeTime = 4f;
    }
}
