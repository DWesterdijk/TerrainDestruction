using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// The deformation of terrain happens in here.
/// quite some mathematical magic happening in here.
/// 
/// This script goes on the object of reference.
/// 
/// credits to "Jarno" for helping me out on this.
/// </summary>
public class DeformHeight : MonoBehaviour {

    [Tooltip("value between 1 and 0. 1 being max height. Becareful though, the effects are strong")]
    public float depth;
    [Tooltip("The size of the hole depends on this")]
    public int size;

    [SerializeField]
    private Terrain _terrain;

    [SerializeField]
    private GameObject _object;

    private TerrainData _terrainData;
    private Vector3 _objectPos;

    private float[,] heights;

    private int terX;
    private int terZ;
    private float terY;

    private void Start()
    {
        if (_terrain == null)
        {
            _terrain = FindObjectOfType<Terrain>();
        }
        _terrainData = _terrain.terrainData;


    }
    public void DeformTerrain()
    {
        heights = _terrainData.GetHeights(0, 0, _terrainData.heightmapWidth, _terrainData.heightmapHeight);
        _objectPos = new Vector3(_object.transform.position.x - (size / 2), _object.transform.position.y, _object.transform.position.z - (size / 2));

            heights = _terrainData.GetHeights(0, 0, _terrainData.heightmapWidth, _terrainData.heightmapHeight);

            //Sets the location of the object on the terrain.
            terX = (int)((_objectPos.x / _terrainData.size.x) * _terrainData.heightmapWidth);
            terZ = (int)((_objectPos.z / _terrainData.size.z) * _terrainData.heightmapHeight);

            terY = heights[terX, terZ];

        terY = depth * _objectPos.y;
        float[,] height = new float[size, size];
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                height[i, j] = terY;
            }
        }
        heights[terX, terZ] = terY;

        _terrainData.SetHeights(terX, terZ, height);
        Destroy(gameObject);
    }
}
