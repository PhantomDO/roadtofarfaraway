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
        }

        private void OnDestroy()
        {
            GameEventManager.OnKillUnit -= KillUnit;
        }

        private void KillUnit(Unit unit)
        {
            Destroy(unit.gameObject);
        }

        /// <summary>
        /// Call when something is hitting the Unit
        /// </summary>
        /// <param name="damage"></param>
        public void TakeDamage(float damage)
        {
            CurrentHealth -= damage;
        }
    }
}