using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Target : MonoBehaviour
{
    private Camera cam;
    public float maxDistance;
    public LayerMask mask;
    // Start is called before the first frame update
    void Start()
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
}
