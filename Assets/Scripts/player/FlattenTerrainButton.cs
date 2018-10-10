using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlattenTerrainButton : MonoBehaviour {

    [SerializeField]
    private Terrain _terrain;

    private int terX;
    private int terZ;

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.F))
        {
            Debug.Log("Terrain = flat");
            terX = _terrain.terrainData.heightmapWidth;
            terZ = _terrain.terrainData.heightmapHeight;

            var heights = _terrain.terrainData.GetHeights(0, 0, terX, terZ);

            for (int i = 0; i < terX; i++)
            {
                for (int j = 0; j < terZ; j++)
                {
                    heights[i, j] = 0.15f;
                }
            }
            _terrain.terrainData.SetHeights(0, 0, heights);
        }
    }
}
