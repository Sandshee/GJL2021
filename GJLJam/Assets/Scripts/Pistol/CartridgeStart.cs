using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CartridgeStart : MonoBehaviour
{

    private Rigidbody rb;

    public Vector3 initialForce;
    void Awake()
    {
        rb = GetComponent<Rigidbody>();
        rb.AddRelativeForce(initialForce);
        rb.AddTorque(Vector3.right);
    }
}
