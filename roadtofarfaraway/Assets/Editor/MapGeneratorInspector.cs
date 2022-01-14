using UnityEngine;
using UnityEditor;

namespace FFA.MapGeneration
{
    [CustomEditor(typeof(MapGenerator))]
    public class MapGeneratorInspector : Editor
    {
        MapGenerator map;

        private void OnEnable()
        {
            map = (MapGenerator)target;
        }

        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();
            if (Application.isPlaying)
            {
                if (GUILayout.Button("Generate new map"))
                {
                    map.GenerateNewMap();
                }
                if (GUILayout.Button("Repair map"))
                {
                    map.TryRepair();
                }
            }
        }
    }
}