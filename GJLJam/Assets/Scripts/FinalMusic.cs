using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinalMusic : MonoBehaviour
{
    public AudioSource audioS;
    public bool inTutorial = false;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        if (inTutorial)
        {
            FindObjectOfType<RestartLogic>().SetTime(30);
        }
        if (other.CompareTag("Player") && !audioS.isPlaying)
        {
            audioS.Play();
        }
    }
}
