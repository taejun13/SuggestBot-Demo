using System.Collections;
using System.Linq;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Windows.WebCam;
using UnityEngine.Windows.Speech;
using System.Threading;

public class HololensScreenShot : MonoBehaviour
{
    PhotoCapture photoCaptureObject = null;
    KeywordRecognizer keywordRecognizer;
    delegate void KeywordAction(PhraseRecognizedEventArgs args);
    Dictionary<string, KeywordAction> keywordCollection;

    public bool repeat = true;

    System.Diagnostics.Stopwatch sw;
    // Start is called before the first frame update
    void Start()
    {
        sw = new System.Diagnostics.Stopwatch();

        keywordCollection = new Dictionary<string, KeywordAction>();
        keywordCollection.Add("Take Picture", TakePicture);
        keywordRecognizer = new KeywordRecognizer(keywordCollection.Keys.ToArray());
        keywordRecognizer.OnPhraseRecognized += KeywordRecognizer_OnPhraseRecognized;
        keywordRecognizer.Start();
    }

    private void KeywordRecognizer_OnPhraseRecognized(PhraseRecognizedEventArgs args)
    {
        KeywordAction keywordAction;
        if (keywordCollection.TryGetValue(args.text, out keywordAction))
            keywordAction.Invoke(args);
    }
    void TakePicture(PhraseRecognizedEventArgs prea)
    {
        sw.Reset();
        sw.Start();
        Debug.Log("sw1 - " + sw.ElapsedMilliseconds + "ms");

        // 1. PhotoCapture 객체 생성
        PhotoCapture.CreateAsync(false, OnPhotoCaptureCreated);
    }

    void OnPhotoCaptureCreated(PhotoCapture captureObject)
    {
        // 2. CameraParameter 설정
        Debug.Log("sw2 - " + sw.ElapsedMilliseconds + "ms");

        photoCaptureObject = captureObject;
        CameraParameters c = new CameraParameters();
        c.hologramOpacity = 0.0f;
        //c.cameraResolutionWidth = 3094;     // Hololens 2 default resolution
        //c.cameraResolutionHeight = 2196;    // Hololens 2 default resolution
        c.cameraResolutionWidth = 640;
        c.cameraResolutionHeight = 360;
        c.pixelFormat = CapturePixelFormat.BGRA32;
        Debug.Log("sw3 - " + sw.ElapsedMilliseconds + "ms");
        captureObject.StartPhotoModeAsync(c, OnPhotoModeStarted);
    }

    void OnPhotoModeStarted(PhotoCapture.PhotoCaptureResult result)
    {
        if (result.success)
        {
            Debug.Log("sw4 - " + sw.ElapsedMilliseconds + "ms");
            photoCaptureObject.TakePhotoAsync(OnCapturedPhotoToMemory);
        }
        else
        {
            Debug.LogError("Unable to start photo mode ...");
        }
    }

    void OnCapturedPhotoToMemory(PhotoCapture.PhotoCaptureResult result, PhotoCaptureFrame photoCaptureFrame)
    {
        if (result.success)
        {
            // 5. 촬영된 사진 (photoCaptureFrame)을 texture에 보여주기
            Debug.Log("sw5 - " + sw.ElapsedMilliseconds + "ms");

            Texture2D targetTexture = new Texture2D(900, 500);

            //Texture2D targetTexture = new Texture2D(3094, 2196);
            Debug.Log("sw6 - " + sw.ElapsedMilliseconds + "ms");

            photoCaptureFrame.UploadImageDataToTexture(targetTexture);
            Debug.Log("sw7 - " + sw.ElapsedMilliseconds + "ms");

            RawImage ri = GameObject.Find("CapturedViewCanvas/RawImage").GetComponent<RawImage>();
            Debug.Log("sw8 - " + sw.ElapsedMilliseconds + "ms");

            ri.texture = targetTexture;
            Debug.Log("sw9 - " + sw.ElapsedMilliseconds + "ms");

            sw.Stop();
        }

        if (repeat)
            photoCaptureObject.TakePhotoAsync(OnCapturedPhotoToMemory);
        else
            photoCaptureObject.StopPhotoModeAsync(OnStoppedPhotoMode);

    }

    void OnStoppedPhotoMode(PhotoCapture.PhotoCaptureResult result)
    {
        photoCaptureObject.Dispose();
        photoCaptureObject = null;
    }


    // Update is called once per frame
    void Update()
    {

    }
}