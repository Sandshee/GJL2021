using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Button3D : Interactible
{
    public PoweredObject destination;
    public float duration = 2f;
    public bool locked = false;
    public bool endGame = false;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public override void Interact()
    {
        Debug.Log("Boop!");
        if (!locked)
        {
            if (endGame)
            {
                Debug.Log("End Game");
                FindObjectOfType<SceneLoader>().LoadNextScene(true);
                FindObjectOfType<Sun>().Implode();
                FindObjectOfType<RestartLogic>().StopTime();
            }
            else
            {
                destination.Power(duration);
            }
            //FindObjectOfType<PlayerController>().Uninteract();
            //Play unlocked animation.
        } else
        {
            //Play locked animation.
        }
    }
}
