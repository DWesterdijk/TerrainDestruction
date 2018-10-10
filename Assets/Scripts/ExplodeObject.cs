using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExplodeObject : MonoBehaviour {

    [SerializeField]
    private DeformHeight _deformHeight;
    [SerializeField]
    private ParticleSystem _particle;

    private float _timer = 180f;

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("Entered");
        if (other.GetComponent<Terrain>())
        {
            Instantiate(_particle, this.gameObject.transform.position, Quaternion.identity);
            _deformHeight.DeformTerrain();
        }
    }

    private void Update()
    {
        if (_timer > 0)
        {
            _timer--;
        }
        if (_timer <= 0)
        {
            Instantiate(_particle, this.gameObject.transform.position, Quaternion.identity);
            Destroy(gameObject);
        }
    }
}
