using Managers;
using UnityEngine;

namespace Gameplay.UnitComponents
{
    public class HealthComponent : MonoBehaviour
    {
        [Header("Health")]
        [SerializeField] private float _maxHealth = 100f;
        
        private float _currentHealth;
        public float CurrentHealth
        {
            get => _currentHealth;
            private set
            {
                _currentHealth = Mathf.Max(0.0f, value);
                if (CurrentHealth <= 0.0f && TryGetComponent(out Unit unit))
                {
                    GameEventManager.Instance?.KillUnit(unit);
                }
            }
        }
        
        private void Awake()
        {
            CurrentHealth = _maxHealth;

            GameEventManager.OnKillUnit += KillUnit;
            GameEventManager.OnDamageUnit += DamageUnit; 
        }

        private void OnDestroy()
        {
            GameEventManager.OnKillUnit -= KillUnit;
            GameEventManager.OnDamageUnit -= DamageUnit;
        }
        
        private void DamageUnit(float damage, Unit damagedUnit)
        {
            if (TryGetComponent(out Unit unit) && unit != damagedUnit) return;
            CurrentHealth -= damage;
        }

        private void KillUnit(Unit killedUnit)
        {
            if (TryGetComponent(out Unit unit) && unit != killedUnit) return;
            Destroy(unit.gameObject);
        }
    }
}