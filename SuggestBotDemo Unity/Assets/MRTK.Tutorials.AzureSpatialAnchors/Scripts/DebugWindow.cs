using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace MRTK.Tutorials.AzureSpatialAnchors
{
    public class DebugWindow : MonoBehaviour
    {
        [SerializeField] private TextMeshProUGUI debugText = default;
        public int textLimit = 300;

        private ScrollRect scrollRect;

        private void Start()
        {
            // Cache references
            scrollRect = GetComponentInChildren<ScrollRect>();

            // Subscribe to log message events
            Application.logMessageReceived += HandleLog;

            // Set the starting text
            debugText.text = "Debug messages will appear here.\n\n";
        }

        private void OnDestroy()
        {
            Application.logMessageReceived -= HandleLog;
        }

        private void HandleLog(string message, string stackTrace, LogType type)
        {
            debugText.text += message + " \n";
            int textLength = debugText.text.Length;
            if (textLength > textLimit)
                debugText.text = debugText.text.Substring(debugText.text.Length - textLimit);

            Canvas.ForceUpdateCanvases();
            scrollRect.verticalNormalizedPosition = 0;
        }
    }
}
