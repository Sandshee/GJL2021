using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(TrailRenderer))]
public class SmokeTrail : MonoBehaviour
{
    private TrailRenderer tr;
    public float smokeSpeed = 0.5f;
    public bool smoking = false;
    //public float smokeNoise = 0.05f;
    // Start is called before the first frame update
    void Start()
    {
        tr = GetComponent<TrailRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        if (smoking)
        {
            //IncreaseHeightOfTrail();
        }
    }

    void IncreaseHeightOfTrail()
    {
        Vector3[] positions = new Vector3[tr.positionCount];
        tr.GetPositions(positions);

        for (int i = 0; i < tr.positionCount; i++)
        {
            positions[i] = positions[i] + Vector3.up * smokeSpeed * Time.deltaTime;
            //positions[i].x += smokeNoise * Mathf.PerlinNoise(Time.time, Time.time + 3) * Time.deltaTime;
            //positions[i].z += smokeNoise * Mathf.PerlinNoise(Time.time + 5, Time.time + 9) * Time.deltaTime;
        }

        tr.SetPositions(positions);
    }

    public void BeginSmoke()
    {
        tr.enabled = true;
        smoking = true;
    }
}
