using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class SlowRevealText : MonoBehaviour
{
    [SerializeField]
    public TextMeshProUGUI tmpro;
    [SerializeField]
    public string finaltext;
    [SerializeField]
    public float time;
    // Start is called before the first frame update
    void Start()
    {
        Cursor.lockState = CursorLockMode.None;
        finaltext = tmpro.text;
        tmpro.text = "";
        StartCoroutine(BuildText());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator BuildText()
    {
        for(int i = 0; i < finaltext.Length; i++)
        {
            tmpro.text = string.Concat(tmpro.text, finaltext[i]);
            yield return new WaitForSeconds(time);
        }
    }
}
