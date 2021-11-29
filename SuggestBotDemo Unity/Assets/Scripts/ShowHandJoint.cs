using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;

namespace Microsoft.MixedReality.Toolkit.Examples
{
    public class ShowHandJoint : MonoBehaviour
    {
        MixedRealityPose poseData;
        // Start is called before the first frame update
        void Start()
        {
           
        }

        // Update is called once per frame
        void Update()
        {
            HandJointUtils.TryGetJointPose(TrackedHandJoint.ThumbTip, Handedness.Right, out MixedRealityPose poseData);
            Vector3 handPos = poseData.Position;
            GameObject handCursor = GameObject.Find("HandCursor");
            handCursor.transform.position = handPos;
        }

    }
}

