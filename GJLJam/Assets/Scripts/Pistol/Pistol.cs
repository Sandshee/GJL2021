using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pistol : MonoBehaviour
{
    public GameObject cartridge;
    public Transform cartridgeSpawn;
    private Animator anim;
    public SmokeTrail startFire;
    public Target target;
    public GameObject bullet;
    public Transform pistolLoc;
    public AudioClip dryFire;
    public AudioClip successFire;
    public AudioClip cartridgeClip;
    private AudioSource audioS;

    public bool unholstered = false;
    public bool interacting = false;
    //The gun has one round in it.
    public bool hasRound = true;

    private bool triggerHeld = false;
    public int gunPickupThreshold = 7;
    public AudioClip gunPickup;
    // Start is called before the first frame update
    void Awake()
    {
        anim = GetComponent<Animator>();
        audioS = GetComponent<AudioSource>();
        if (BetweenLoopData.GetGunsPickedUp() >= gunPickupThreshold)
        {
            Draw();
            anim.SetBool("Drawn", true);
            PlayPickupSFX();
        } else
        {
            Holster();
        }
    }

    public void PlayPickupSFX()
    {
        audioS.PlayOneShot(gunPickup);
    }

    // Update is called once per frame
    void Update()
    {
        unholstered = Input.GetAxisRaw("Zoom") > 0 && !interacting;
        anim.SetBool("Drawn", unholstered);

        transform.position = Vector3.Lerp(transform.position, pistolLoc.position, 0.2f);
        transform.rotation = Quaternion.Lerp(transform.rotation, pistolLoc.rotation, 0.1f);

        if (unholstered)
        {
            if (Input.GetAxisRaw("Fire") > 0 && !triggerHeld)
            {
                triggerHeld = true;
                Fire();
            }

            if (Input.GetAxisRaw("Fire") <= 0)
            {
                triggerHeld = false;
            }
        }
    }

    public void Fire()
    {
        if (hasRound)
        {
            anim.SetTrigger("Fire");
            hasRound = false;
            GameObject.Instantiate(cartridge, cartridgeSpawn.position, cartridgeSpawn.rotation);
            //Ideally spawn the bullet going towards the bullet hole.
            //Debug.DrawRay(startFire.transform.position, (target.transform.position - startFire.transform.position) * 10, Color.red, 10);
            GameObject.Instantiate(bullet, startFire.transform.position, Quaternion.LookRotation(target.transform.position - startFire.transform.position));
            target.BulletHole();
            audioS.PlayOneShot(cartridgeClip);
            audioS.PlayOneShot(successFire);
            startFire.BeginSmoke();
            //Bang
            //DrawTrail
            //Particle Effect
        } else
        {
            audioS.PlayOneShot(dryFire);
            //Click
        }
    }

    public void Draw()
    {
        interacting = false;
    }

    public void Holster()
    {
        interacting = true;
    }
}
