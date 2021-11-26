using System;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace Units
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
        public event Action<Unit> OnUnitAsLostLife;

        [field: SerializeField] public UnitType Type { get; private set; }
        [field: SerializeField] public List<Decoration> Decorations { get; private set; }

        [Header("Health")]
        [SerializeField] private float _maxHealth = 100f;
        public float CurrentHealth { get; private set; }

        [Header("Movement")] 
        [SerializeField] private bool _canMove;
        [SerializeField] private float _moveSpeed;

        [Header("Attack")] 
        [SerializeField] private DamageType _damageType;
        [SerializeField] private float _damage;
        [SerializeField] private float _fireRate;
        

        public virtual void TakeDamage(float damage)
        {
            float bonus = 0.0f;
            foreach (var decoration in Decorations)
            {
                if (decoration is DamageDecoration damageDecoration)
                {
                    bonus += damageDecoration.bonus;
                }
            }
            
            CurrentHealth = Mathf.Max(CurrentHealth - (damage + bonus), 0.0f);

            if (CurrentHealth <= 0.0f)
            {
                OnUnitAsLostLife?.Invoke(this);
            }
        }

        public void MoveTo(Vector3 nextPosition)
        {
            if (!_canMove) return;

            float speedBonus = 0.0f;
            foreach (var decoration in Decorations)
            {
                if (decoration is MovementDecoration movementDecoration)
                {
                    speedBonus += movementDecoration.speedBonus;
                }
            }

            var position = transform.position;
            var direction = (nextPosition - position).normalized;
            transform.position = Vector3.MoveTowards(position, direction, Time.deltaTime * (_moveSpeed + speedBonus));
        }
    }
}