
using UnityEngine;

using Managers;
using Gameplay.UnitComponents;

namespace Gameplay
{
    public enum UnitType : int
    {
        Null = -1,
        Shrek = 0,
        Donkey = 1,
        Fiona = 2,
        Dragon = 3,
        // More to come
    }

    public class Unit : MonoBehaviour
    {
        [field: SerializeField] public UnitType Type { get; private set; }

        [field: SerializeField] public bool isDraguable { get; private set; }

        private void Awake()
        {
            isDraguable = true;
            GameEventManager.OnDropUnitInWorld += DropUnitInWorld;
        }
        private void OnDestroy()
        {
            GameEventManager.OnDropUnitInWorld -= DropUnitInWorld;
        }

        private void DropUnitInWorld(Unit unit)
        {
            if (unit == this)
            {
                isDraguable = false;
            }
        }
    }
}