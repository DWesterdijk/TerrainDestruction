using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeformInput : MonoBehaviour {
    //public float force = 10f;
    //public float offsetForce = 0.1f;
    public Camera mainCam;

    private void Update()
    {
        if (Input.GetMouseButton(0))
        {
            HandleInput();
        }
    }

    void HandleInput()
    {
        RaycastHit hit;
        //Ray inputRay = mainCam.ScreenPointToRay(Input.mousePosition);
        Ray inputRay = new Ray(mainCam.transform.position, mainCam.transform.forward);

        if (Physics.Raycast(inputRay, out hit))
        {
            /*DeformMesh deform = hit.collider.GetComponent<DeformMesh>();
            if (deform)
            {
                Vector3 point = hit.point;
                point += hit.normal * offsetForce;
                deform.AddDeformingForce(point, force);
            }*/

            Transform objectHit = hit.transform;
            DeformHeight deform = GetComponent<DeformHeight>();
            if (objectHit)
            {
                Debug.DrawRay(inputRay.origin, mainCam.transform.forward);
                Debug.Log("Deforming");
                Vector3 point = hit.point;
            }
        }
    }

    
}
