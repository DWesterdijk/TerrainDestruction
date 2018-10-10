using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyObjectTimer : MonoBehaviour {
    [SerializeField]
    private int _timer;

    private void Update()
    {
        if (_timer > 0)
        {
            _timer--;
        }
        else if (_timer <= 0)
        {
            Destroy(this.gameObject);
        }
    }
}
