using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[RequireComponent(typeof(MeshFilter))]
public class DeformMesh : MonoBehaviour {
    Mesh deformingMesh;
    Vector3[] originalVerices, displacedVertices;
    Vector3[] vertexVelocities;

	// Use this for initialization
	void Start () {
        deformingMesh = GetComponent<MeshFilter>().mesh;
        originalVerices = deformingMesh.vertices;
        displacedVertices = new Vector3[originalVerices.Length];

        for (int i = 0; i < originalVerices.Length; i++)
        {
            displacedVertices[i] = originalVerices[i];
        }

        vertexVelocities = new Vector3[originalVerices.Length];
	}

    public void AddDeformingForce(Vector3 point, float force)
    {
        for (int i = 0; i < displacedVertices.Length; i++)
        {
            AddForceToVertex(i, point, force);
        }
    }

    public void AddForceToVertex(int i, Vector3 point, float force)
    {
        Vector3 pointToVertex = displacedVertices[i] - point;
        float attenuatedForce = force / (1f + pointToVertex.sqrMagnitude);
        float velocity = attenuatedForce * Time.deltaTime;
        vertexVelocities[i] += pointToVertex.normalized * velocity;
    }

    private void Update()
    {
        for (int i = 0; i < displacedVertices.Length; i++)
        {
            UpdateVertex(i);
        }
        deformingMesh.vertices = displacedVertices;
        deformingMesh.RecalculateNormals();
    }

    void UpdateVertex(int i)
    {
        Vector3 velocity = vertexVelocities[i];
        displacedVertices[i] += velocity * Time.deltaTime;
    }
}
