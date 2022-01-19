using System;
using System.Collections;
using System.Collections.Generic;
using Gameplay;
using Gameplay.UnitComponents;
using UnityEngine;

public class RadarComponent : MonoBehaviour
{
    public Unit Target { get; private set; }

    [SerializeField] private float _searchingRate = 0.5f;
    [SerializeField] private float _fovRadius = 2 ;
    [SerializeField] private LayerMask _detectionLayer;
    [SerializeField] private SearchingMethod _searchingMethod = SearchingMethod.LowLife;
    
    private float _rateSinceUpdateSearch;

    private void Awake()
    {
        _rateSinceUpdateSearch = 0f;
    }

    // Update is called once per frame
    void Update()
    {
        if (Time.time - _rateSinceUpdateSearch >= _searchingRate)
        {
            Target = SearchForTarget();
        }
    }

#if UNITY_EDITOR
    private void OnDrawGizmos()
    {
        UnityEditor.Handles.color = Color.green;
        UnityEditor.Handles.DrawWireDisc(transform.position, Vector3.up, _fovRadius);
    }
#endif
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
            while (!rootNotPlayer.CompareTag("Player"))
            {
                // it can't be this unit, then ignore itself

                if (rootNotPlayer.TryGetComponent(out Unit unit) && 
                    rootNotPlayer.GetInstanceID() != transform.GetInstanceID())
                {
                    // if it does not contains the unit add it to the list then break
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
