using UnityEngine;

namespace Gameplay
{
    [CreateAssetMenu(menuName = "UnitParameters", fileName = "Default Parameter")]
    public class UnitParameters : ScriptableObject
    {
        public UnitType UnitType;
        public uint GoldSpawnCost;
        public uint GoldDeathDrop;
        public Unit Prefab;
        public Sprite ProfilePicture;
    }
}