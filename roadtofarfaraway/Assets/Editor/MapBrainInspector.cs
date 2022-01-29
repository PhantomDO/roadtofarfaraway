using UnityEditor;
using UnityEngine;

namespace Editor
{
    [CustomEditor(typeof(MapBrain))]
    public class MapBrainInspector : UnityEditor.Editor
    {
        MapBrain _mapBrain;

        private void OnEnable()
        {
            _mapBrain = (MapBrain)target;
        }

        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();
            if (Application.isPlaying)
            {
                GUI.enabled = !_mapBrain.IsAlgorithmRunning;
                if (GUILayout.Button("Run genetic algorithm"))
                {
                    _mapBrain.RunAlgorithm();
                }

                if (_mapBrain.BestMap != null) { GUI.enabled = _mapBrain.BestMap.Towers.Count > 0; }
                else { GUI.enabled = false; }
                if (GUILayout.Button("Apply damage"))
                {
                    FindObjectsOfType<Tower>()[0].ApplyDamage(50.0f);
                }
            }
        }
    }
}