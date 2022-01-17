
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

        private HealthComponent _health = null;
        public HealthComponent Health => _health;

        private DamageComponent _damage = null;
        public DamageComponent Damage => _damage;

        private MovementComponent _movement = null;
        public MovementComponent Movement => _movement;
        
        private void Awake()
        {
            bool hasHealth = TryGetComponent(out _health);
            bool hasDamage = TryGetComponent(out _damage);
            bool hasMovement = TryGetComponent(out _movement);
        }

        private void Update()
        {
            // Death test
            if (Health?.IsDead == true)
            {
                GameEventManager.Instance?.KillUnit(this);
            }


        }
    }
}