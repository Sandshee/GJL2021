using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Target : MonoBehaviour
{
    private Camera cam;
    public float maxDistance;
    public LayerMask mask;
    public GameObject bulletDecal;
    // Start is called before the first frame update
    void Awake()
    {
        cam = Camera.main;
    }

    // Update is called once per frame
    void Update()
    {
        transform.position = FindPosition();
    }

    Vector3 FindPosition()
    {
        Vector3 destination = new Vector3();
        RaycastHit hitInfo;

        bool hit = Physics.Raycast(cam.transform.position, cam.transform.forward, out hitInfo, mask);

        if (hit)
        {
            destination = hitInfo.point;
            transform.rotation = Quaternion.LookRotation(hitInfo.normal);
        } else
        {
            destination = cam.transform.position + cam.transform.forward * maxDistance;
        }

        return destination;
    }

    public void BulletHole()
    {
        RaycastHit hitInfo;
        if (Physics.Raycast(cam.transform.position, cam.transform.forward, out hitInfo, mask))
        {
            if (hitInfo.collider.CompareTag("Destructible"))
            {
                hitInfo.collider.GetComponent<Destructible>().Damage();
            }
            else
            {
                GameObject.Instantiate(bulletDecal, transform.position, transform.rotation);
            }
        }

    }
}
