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
        if (logic.GetTime() <= thresholdTime)
        {
            float t = 1 - (logic.GetTime() / thresholdTime);
            transform.localScale = Vector3.one * Mathf.LerpUnclamped(startScale, endScale, t);
            audioS.minDistance = Mathf.LerpUnclamped(startScale, endScale, t); ;
            audioS.maxDistance = initialMaxFalloff + Mathf.LerpUnclamped(startScale, endScale, t); ;
        }
    }
}
