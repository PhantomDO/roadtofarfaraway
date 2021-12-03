using System;
using System.Collections;
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

    public enum SearchingMethod : int
    {
        Nearest = 0,
        LowLife = 1,
        HighLife = 2,
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
        [SerializeField] private float _damage;
        [SerializeField] private float _fireRate;
        [SerializeField] private float _fovRadius;
        [SerializeField] private LayerMask _detectionLayer;
        [SerializeField] private SearchingMethod _searchingMethod;
        public Unit Target { get; set; }
        private float _rateSinceAttack;

        protected virtual void Start()
        {
            Target = null;
            _rateSinceAttack = 0f;
            CurrentHealth = _maxHealth;

            foreach (var decoration in GetComponents<Decoration>())
            {
                if (!Decorations.Contains(decoration))
                {
                    Decorations.Add(decoration);
                }
            }
        }

        protected void Update()
        {
            Target = SearchForTarget();

            // Attack the nearest target
            if (Target)
            {
                // Update the rate of attack
                if (Time.time - _rateSinceAttack >= _fireRate)
                {
                    Target.TakeDamage(_damage);
                    _rateSinceAttack = Time.time;
                }
            }
        }

        /// <summary>
        /// Search nearest unit
        /// </summary>
        /// <param name="units"></param>
        /// <param name="positiveInfinity"></param>
        /// <param name="lambdaParameter"></param>
        /// <returns></returns>
        private int SearchParameter(List<Unit> units, bool positiveInfinity, Func<float, int, int> lambdaParameter = null)
        {
            if (lambdaParameter == null) return -1;
            
            var savedParameter = positiveInfinity ? Mathf.Infinity : Mathf.NegativeInfinity;
            var index = -1;

            for (int i = 0; i < units.Count; i++) index = lambdaParameter.Invoke(savedParameter, i);
            
            return index;
        }

        /// <summary>
        /// Search a target in the fov of the unit
        /// </summary>
        /// <returns>the unit near the player</returns>
        private Unit SearchForTarget()
        {
            // Find nearby collider, if they're units stock it in colliders[].
            Collider[] results = new Collider[3];
            var size = Physics.OverlapSphereNonAlloc(transform.position, _fovRadius, results, _detectionLayer);

            int index = -1;

            List<Unit> units = new List<Unit>();
            for (int i = 0; i < size; i++)
            {
                if (results[i].TryGetComponent(out Unit unit) && !units.Contains(unit))
                {
                    units.Add(unit);
                }
            }


            // nearest method
            switch (_searchingMethod)
            {
                case SearchingMethod.Nearest:
                    index = SearchParameter(units, true, (saveDist, i) =>
                    {
                        var dist = Vector3.Distance(transform.position, units[i].transform.position);
                        if (saveDist < dist)
                        {
                            saveDist = dist;
                            return i;
                        } 

                        return -1;
                    });
                    break;
                case SearchingMethod.LowLife:
                    index = SearchParameter(units, true, (saveHealth, i) =>
                    {
                        if (saveHealth > units[i].CurrentHealth)
                        {
                            saveHealth = units[i].CurrentHealth;
                            return i;
                        }

                        return -1;
                    });
                    break;
                case SearchingMethod.HighLife:
                    index = SearchParameter(units, false, (saveHealth, i) =>
                    {
                        if (saveHealth < units[i].CurrentHealth)
                        {
                            saveHealth = units[i].CurrentHealth;
                            return i;
                        }

                        return -1;
                    });
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }

            // Set the target only if she's near the unit
            return index != -1 && units[index] ? units[index] : null;
        }

        /// <summary>
        /// Call when something is hitting the Unit
        /// </summary>
        /// <param name="damage"></param>
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

        /// <summary>
        /// Movement method, move to the next point
        /// </summary>
        /// <param name="nextPosition"></param>
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