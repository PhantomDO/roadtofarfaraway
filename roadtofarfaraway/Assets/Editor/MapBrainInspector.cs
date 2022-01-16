using UnityEngine;
using UnityEditor;

namespace FFA.MapGeneration
{
    [CustomEditor(typeof(MapBrain))]
    public class MapBrainInspector : Editor
    {
        MapBrain mapBrain;

        private void OnEnable()
        {
            mapBrain = (MapBrain)target;
        }

        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();
            if (Application.isPlaying)
            {
                GUI.enabled = !mapBrain.IsAlgorithmRunning;
                if (GUILayout.Button("Run genetic algorithm"))
                {
                    mapBrain.RunAlgorithm();
                }
            }
        }
    }
}