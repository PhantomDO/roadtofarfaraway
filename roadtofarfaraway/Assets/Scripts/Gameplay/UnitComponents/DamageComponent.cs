using System;
using System.Collections.Generic;
using UnityEngine;

namespace Gameplay.UnitComponents
{
    public enum SearchingMethod : int
    {
        Nearest = 0,
        LowLife = 1,
        HighLife = 2,
    }

    public class DamageComponent : MonoBehaviour
    {
        [field: SerializeReference] public Unit Target { get; set; }

        [SerializeField] private float _damage;
        [SerializeField] private float _fireRate;
        [SerializeField] private float _fovRadius;
        [SerializeField] private LayerMask _detectionLayer;
        [SerializeField] private SearchingMethod _searchingMethod;

        private float _rateSinceAttack;

        private void Awake()
        {
            Target = null;
            _rateSinceAttack = 0f;
        }

        private void Update()
        {
            if (Target == null)
            {
                Target = SearchForTarget();
            }
            else
            {
                // Attack the nearest target
                if (Time.time - _rateSinceAttack >= _fireRate && Target.Health)
                {
                    Target.Health.TakeDamage(_damage);
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
                        if (units[i].Health && saveHealth > units[i].Health.CurrentHealth)
                        {
                            saveHealth = units[i].Health.CurrentHealth;
                            return i;
                        }

                        return -1;
                    });
                    break;
                case SearchingMethod.HighLife:
                    index = SearchParameter(units, false, (saveHealth, i) =>
                    {
                        if (units[i].Health && saveHealth < units[i].Health.CurrentHealth)
                        {
                            saveHealth = units[i].Health.CurrentHealth;
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
    }
}