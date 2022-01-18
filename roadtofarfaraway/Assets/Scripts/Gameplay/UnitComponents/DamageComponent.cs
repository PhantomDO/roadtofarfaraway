using System;
using System.Collections.Generic;
using Managers;
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
                    GameEventManager.Instance?.DamageUnit(_damage, Target);
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
        private int SearchParameter(List<Unit> units, bool positiveInfinity, Func<int, int> lambdaParameter = null)
        {
            if (lambdaParameter == null) return -1;

            var savedParameter = positiveInfinity ? Mathf.Infinity : Mathf.NegativeInfinity;
            var index = -1;

            for (int i = 0; i < units.Count; i++) index = lambdaParameter.Invoke(i);

            return index;
        }

        /// <summary>
        /// Search a target in the fov of the unit
        /// </summary>
        /// <returns>the unit near the player</returns>
        private Unit SearchForTarget()
        {
            // Find nearby collider, if they're units stock it in colliders[].
            Collider[] results = new Collider[4];
            var size = Physics.OverlapSphereNonAlloc(transform.position, _fovRadius, results, _detectionLayer);

            int index = -1;
            Debug.Log($"Size: {size}");
            
            Unit unit;
            List<Unit> units = new List<Unit>();
            for (int i = 0; i < size; i++)
            {
                if (!results[i].TryGetComponent(out unit))
                {
                    if (!results[i].transform.parent.TryGetComponent(out unit))
                    {
                        Debug.Log($"Can't find Unit component on : {results[i]}");
                    }
                }

                if (!units.Contains(unit) && unit?.Damage != this)
                {
                    units.Add(unit);
                }
            }

            float save = 0f;

            // nearest method
            switch (_searchingMethod)
            {
                case SearchingMethod.Nearest:
                    index = SearchParameter(units, true, (i) =>
                    {
                        var dist = Vector3.Distance(transform.position, units[i].transform.position);
                        if (save < dist)
                        {
                            save = dist;
                            return i;
                        }

                        return -1;
                    });
                    break;
                case SearchingMethod.LowLife:
                    index = SearchParameter(units, true, (i) =>
                    {
                        if (units[i].Health && save > units[i].Health.CurrentHealth)
                        {
                            save = units[i].Health.CurrentHealth;
                            return i;
                        }

                        return -1;
                    });
                    break;
                case SearchingMethod.HighLife:
                    index = SearchParameter(units, false, (i) =>
                    {
                        if (units[i].Health && save < units[i].Health.CurrentHealth)
                        {
                            save = units[i].Health.CurrentHealth;
                            return i;
                        }

                        return -1;
                    });
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }

            Debug.Log($"Index: {index}, Save: {save}, Units.Count: {units.Count}");

            // Set the target only if she's near the unit
            return index != -1 && units[index] ? units[index] : null;
        }
    }
}