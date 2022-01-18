using System;
using System.Collections.Generic;
using System.Text;
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
                if (Time.time - _rateSinceAttack >= _fireRate)
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
        private int SearchParameter(List<Unit> units, Func<int, int> lambdaParameter = null)
        {
            if (lambdaParameter == null) return -1;
            
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
            List<Unit> units = new List<Unit>();

            for (int i = 0; i < size; i++)
            {
                // Check if you find a UnitComponent in the hierarchy of the collider
                Transform rootNotPlayer = results[i].transform;
                while (!rootNotPlayer.CompareTag("Player") || rootNotPlayer.parent != null)
                {
                    // it can't be this unit, then ignore itself
                    if (rootNotPlayer.TryGetComponent(out Unit unit) && 
                        rootNotPlayer.GetInstanceID() != transform.GetInstanceID())
                    {
                        // if it does not ontains the unit add it to the list then break
                        if (!units.Contains(unit)) units.Add(unit);
                        break;
                    }

                    // up the hierarchy
                    rootNotPlayer = rootNotPlayer.parent;
                }
            }

            if (units.Count > 0)
            {
                float save;
                // nearest method
                switch (_searchingMethod)
                {
                    case SearchingMethod.Nearest:
                        save = Mathf.NegativeInfinity;
                        index = SearchParameter(units, (i) =>
                        {
                            var dist = Vector3.Distance(transform.position, units[i].transform.position);
                            if (save >= dist) return -1;

                            save = dist;
                            return i;
                        });
                        break;
                    case SearchingMethod.LowLife:
                        save = Mathf.Infinity;
                        index = SearchParameter(units, (i) =>
                        {
                            if (!units[i].TryGetComponent(out HealthComponent health) || save <= health.CurrentHealth) return -1;

                            save = health.CurrentHealth;
                            return i;
                        });
                        break;
                    case SearchingMethod.HighLife:
                        save = Mathf.NegativeInfinity;
                        index = SearchParameter(units, (i) =>
                        {
                            if (!units[i].TryGetComponent(out HealthComponent health) || save >= health.CurrentHealth) return -1;

                            save = health.CurrentHealth;
                            return i;
                        });
                        break;
                    default:
                        throw new ArgumentOutOfRangeException();
                }
            }

            // Set the target only if she's near the unit
            return index != -1 && units[index] ? units[index] : null;
        }
    }
}