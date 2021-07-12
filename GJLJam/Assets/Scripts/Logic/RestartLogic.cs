using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.Events;

public class RestartLogic : MonoBehaviour
{
    public int time = 200;
    public int bonusTime = 5;
    private float actualTime;
    public TextMeshProUGUI textMesh;
    public UnityEvent onRestart;
    public Animator whiteoutAnim;

    // Start is called before the first frame update
    void Start()
    {
        actualTime = time;
        UpdateText();
    }

    // Update is called once per frame
    void Update()
    {
        actualTime -= Time.deltaTime;
        if (actualTime >= 0)
        {
            time = Mathf.FloorToInt(actualTime);
        }

        UpdateText();

        if (actualTime <= 0)
        {
            StartRestart();
        }
    }

    public void StartRestart()
    {
        StartCoroutine(restartTimer());
        whiteoutAnim.SetBool("TimeUp", true);
    }

    public void EndRestart()
    {
        onRestart.Invoke();
    }

    private void UpdateText()
    {
        textMesh.text = FormatInt(time);
    }

    public string FormatInt(int i)
    {
        return i.ToString("000");
    }

    public IEnumerator restartTimer()
    {
        yield return new WaitForSeconds(bonusTime);
        EndRestart();
    }
}
