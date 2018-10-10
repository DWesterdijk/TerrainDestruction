using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerThrowBomb : MonoBehaviour {

    [SerializeField]
    private GameObject _Bomb;

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.LeftControl))
        {
            Debug.Log("Pew");
            GameObject bomb = Instantiate(_Bomb, transform.position, transform.rotation);
            bomb.transform.rotation = Quaternion.LookRotation(this.GetComponent<Camera>().transform.forward);
            bomb.GetComponent<Rigidbody>().AddForce(this.GetComponent<Camera>().transform.forward * 20, ForceMode.VelocityChange);
            Debug.Log(this.transform.rotation);
        }
    }
}
