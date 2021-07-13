using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pistol : MonoBehaviour
{
    public GameObject cartridge;
    public Transform cartridgeSpawn;
    private Animator anim;
    public Transform startFire;
    public Transform target;
    //The gun has one round in it.
    public bool hasRound = true;
    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Fire()
    {
        if (hasRound)
        {
            anim.SetTrigger("Fire");
            hasRound = false;
            GameObject.Instantiate(cartridge, cartridgeSpawn.position, cartridgeSpawn.rotation);

            //Bang
            //DrawTrail
            //Particle Effect
        } else
        {
            //Click
        }
    }
}
