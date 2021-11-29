## SuggestBot: Development of a Context-Based Smart Interaction Service Platform 
<h4 align="center">
 (R&D Project funded by Korea Ministry of Science and ICT - Project Demonstration, <a href="https://hcil.kaist.ac.kr/">HCI Lab KAIST</a>, 2020)
</h4>
<p align="center">
    <img src="img/overviewImage.PNG", width="700">
</p>

## Development Environment
* AR Headset: [Hololens 2](https://www.microsoft.com/ko-kr/hololens/hardware)
* [MRTK-Unity](https://docs.microsoft.com/ko-kr/windows/mixed-reality/mrtk-unity) (Mixed Reality Toolkit) API for Hololens Programming
* Unity Version:  2019.4.8f1 
  * Required Module: Universal Windows Platform Build Support
## Prerequisites 
* HoloLens 2 fundamentals: develop mixed reality applications
  * [Introduction to Mixed Reality Toolkit](https://docs.microsoft.com/ko-kr/learn/modules/learn-mrtk-tutorials/1-1-introduction)

## Access to Real-Time Eye Gaze (MRTK-Unity API)
```C#
Vector3 gazeDir = CoreServices.InputSystem.EyeGazeProvider.GazeDirection;
Vector3 gazeOrigin = CoreServices.InputSystem.EyeGazeProvider.GazeOrigin;

Ray gazeRay = new Ray(gazeOrigin, gazeDir);    // Eye Gaze ray 
GameObject.Find("EyeCursor").transform.position = gazeRay.GetPoint(15.0f);   // Locate eye cursor
```

