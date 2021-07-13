using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InventoryUI : MonoBehaviour
{
    private bool displaying = false;
    private Animator anim;
    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Display()
    {
        anim.SetBool("Display", true);
        displaying = true;
    }

    public void Hide()
    {
        anim.SetBool("Display", false);
        displaying = false;
    }

    public bool GetDisplaying()
    {
        return displaying;
    }
}
