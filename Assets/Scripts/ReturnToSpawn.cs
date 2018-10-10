using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReturnToSpawn : MonoBehaviour {

    private void OnTriggerEnter(Collider other)
    {
        if (other.GetComponent<Camera>() && other.name == "Player")
        {
            other.transform.position = new Vector3(250, 50, 250);
        }
        if (other.name == "SquareBomb" || other.name == "SquareBomb(Clone)")
        {
            Destroy(other);
        }
    }
}
