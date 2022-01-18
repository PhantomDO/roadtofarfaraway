using Managers;
using UnityEngine;

namespace Gameplay.UnitComponents
{
    public class HealthComponent : MonoBehaviour
    {
        [Header("Health")]
        [SerializeField] private float _maxHealth = 100f;

        public bool IsDead { get; private set; }

        private float _currentHealth;
        public float CurrentHealth
        {
            get => _currentHealth;
            private set
            {
                _currentHealth = Mathf.Max(0.0f, value);
                if (CurrentHealth <= 0.0f) IsDead = true;
            }
        }
        
        private void Awake()
        {
            CurrentHealth = _maxHealth;
            IsDead = false;

            GameEventManager.OnKillUnit += KillUnit;
            GameEventManager.OnDamageUnit += DamageUnit; 
        }

        private void OnDestroy()
        {
            GameEventManager.OnKillUnit -= KillUnit;
            GameEventManager.OnDamageUnit -= DamageUnit;
        }

        private void KillUnit(Unit unit)
        {
            Destroy(unit.gameObject);
        }
        
        private void DamageUnit(float damage, Unit damagedUnit)
        {
            if (damagedUnit.gameObject != this.gameObject) return;
            CurrentHealth -= damage;
        }
    }
}