using UnityEngine;

namespace Units
{
    public abstract class Decoration : MonoBehaviour
    {
        public bool isTemporary = false;
    }

    public enum DamageType : uint
    {
        Classic = 0,
        DotOverTime = 1,
    }

    public class DamageDecoration : Decoration
    {
        public float bonus;
        public DamageType type = DamageType.Classic;
    }

    public class MovementDecoration : Decoration
    {
        public float speedBonus;
    }
}