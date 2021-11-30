using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit;

public class EyeGazePointing : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 gazeDir = CoreServices.InputSystem.EyeGazeProvider.GazeDirection;
        Vector3 gazeOrigin = CoreServices.InputSystem.EyeGazeProvider.GazeOrigin;

        //Debug.Log("gazeDir: " + gazeDir.ToString());
        //Debug.Log("gazeOrigin: " + gazeOrigin.ToString());

        Ray gazeRay = new Ray(gazeOrigin, gazeDir);
        GameObject.Find("EyeCursor").transform.position = gazeRay.GetPoint(15.0f);
    }
}
