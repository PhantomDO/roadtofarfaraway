using UnityEngine;

namespace Gameplay
{
    [CreateAssetMenu(menuName = "UnitParameters", fileName = "Default Parameter")]
    public class UnitParameters : ScriptableObject
    {
        public uint Cost;
        public GameObject Prefab;
    }
}