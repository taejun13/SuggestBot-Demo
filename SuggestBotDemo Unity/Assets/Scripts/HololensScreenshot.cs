using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Windows.WebCam;
using UnityEngine.Windows.Speech;
using UnityEngine.UI;
using System.Linq;

public class HololensScreenshot : MonoBehaviour
{
    PhotoCapture photoCaptureObject = null;
    KeywordRecognizer keywordRecognizer;
    delegate void KeywordAction(PhraseRecognizedEventArgs args);
    Dictionary<string, KeywordAction> keywordCollection;

    // Start is called before the first frame update
    void Start()
    {
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
        // 1. PhotoCapture °´Ã¼ »ý¼º
        PhotoCapture.CreateAsync(false, OnPhotoCaptureCreated);
    }

    void OnPhotoCaptureCreated(PhotoCapture captureObject)
    {
        photoCaptureObject = captureObject;
        CameraParameters c = new CameraParameters();
        c.hologramOpacity = 0.0f;
        //c.cameraResolutionWidth = 3094;     // Hololens 2 default resolution
        //c.cameraResolutionHeight = 2196;    // Hololens 2 default resolution
        c.cameraResolutionWidth = 640;
        c.cameraResolutionHeight = 360;
        c.pixelFormat = CapturePixelFormat.BGRA32;
        captureObject.StartPhotoModeAsync(c, OnPhotoModeStarted);
    }

    void OnPhotoModeStarted(PhotoCapture.PhotoCaptureResult result)
    {
        if (result.success)
        {
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
            Texture2D targetTexture = new Texture2D(900, 500);
            photoCaptureFrame.UploadImageDataToTexture(targetTexture);
            RawImage ri = GameObject.Find("CapturedViewCanvas/RawImage").GetComponent<RawImage>();
            ri.texture = targetTexture;

        }

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
