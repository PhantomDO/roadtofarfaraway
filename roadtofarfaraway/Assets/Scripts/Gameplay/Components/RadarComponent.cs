using System;
using System.Collections;
using System.Collections.Generic;
using Gameplay;
using Gameplay.Components;
using UnityEngine;

namespace Gameplay.Components
{
    public enum SearchingMethod : int
    {
        Nearest = 0,
        LowLife = 1,
        HighLife = 2,
    }

    public class RadarComponent : MonoBehaviour
    {
        public Unit Target { get; private set; }

        [SerializeField] private float searchingRateInSecond = 0.5f;
        [SerializeField] private float fovRadiusMin = 2;
        [SerializeField] private float fovRadiusMax = 8;
        [SerializeField] private float speedFovIncrease = 5f;
        [SerializeField] private float speedFovDecrease = 1.5f;
        [SerializeField] private float smoothTime = 0.1f;
        [SerializeField] private LayerMask detectionLayer;
        //[SerializeField] private string[] targetTags;
        [SerializeField] private Collider[] colliderResults;
        [SerializeField] private List<Unit> nearbyUnits;
        public SearchingMethod SearchingMethod = SearchingMethod.LowLife;

        private float _currentRadius;
        private float _radiusVelocity;
        private float _rateSinceUpdateSearchInSecond;

        private void Awake()
        {
            colliderResults = new Collider[8];
            nearbyUnits = new List<Unit>();
            _currentRadius = fovRadiusMin;
            _rateSinceUpdateSearchInSecond = 0f;
        }

        // Update is called once per frame
        void Update()
        {
            if (Time.time - _rateSinceUpdateSearchInSecond >= searchingRateInSecond)
            {
                if (Target == null) Target = SearchForTarget();
                _rateSinceUpdateSearchInSecond = Time.time;

                var targetRadius = Target == null 
                    ? Mathf.Min(_currentRadius * speedFovIncrease, fovRadiusMax) 
                    : Mathf.Max(_currentRadius / speedFovDecrease, fovRadiusMin);
                _currentRadius = Mathf.SmoothDamp(_currentRadius, targetRadius, ref _radiusVelocity, smoothTime);
            }
        }

#if UNITY_EDITOR
        private void OnDrawGizmosSelected()
        {
            UnityEditor.Handles.color = Color.red;
            UnityEditor.Handles.DrawWireDisc(transform.position, Vector3.up, fovRadiusMin);
            UnityEditor.Handles.color = Color.yellow;
            UnityEditor.Handles.DrawWireDisc(transform.position, Vector3.up, _currentRadius);
            UnityEditor.Handles.color = Color.magenta;
            UnityEditor.Handles.DrawWireDisc(transform.position, Vector3.up, fovRadiusMax);
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
            var size = Physics.OverlapSphereNonAlloc(transform.position, _currentRadius, colliderResults, detectionLayer, QueryTriggerInteraction.Ignore);
            
            int index = -1;
            nearbyUnits.Clear();

            if (size > 0)
            {
                for (int i = 0; i < size; i++)
                {
                    // Check if you find a UnitComponent in the hierarchy of the collider
                    Transform rootNotPlayer = colliderResults[i].transform;
                    while (!rootNotPlayer.CompareTag("Player"))
                    {
                        // it can't be this unit, then ignore itself
                        if (rootNotPlayer.TryGetComponent(out Unit unit) &&
                            rootNotPlayer.GetInstanceID() != transform.GetInstanceID())
                        {
                            // if it does not contains the unit add it to the list then break
                            if (!nearbyUnits.Contains(unit))
                            {
                                nearbyUnits.Add(unit);
                            }

                            break;
                        }

                        // up the hierarchy
                        if (rootNotPlayer.parent == null) break;
                        rootNotPlayer = rootNotPlayer.parent;
                    }
                }
            }

            if (nearbyUnits.Count > 0)
            {
                float save;
                // nearest method
                switch (SearchingMethod)
                {
                    case SearchingMethod.Nearest:
                        save = Mathf.NegativeInfinity;
                        index = SearchParameter(nearbyUnits, (i) =>
                        {
                            var dist = Vector3.Distance(transform.position, nearbyUnits[i].transform.position);
                            if (save >= dist) return -1;

                            save = dist;
                            return i;
                        });
                        break;
                    case SearchingMethod.LowLife:
                        save = Mathf.Infinity;
                        index = SearchParameter(nearbyUnits, (i) =>
                        {
                            if (!nearbyUnits[i].Health || save <= nearbyUnits[i].Health.Current)
                                return -1;

                            save = nearbyUnits[i].Health.Current;
                            return i;
                        });
                        break;
                    case SearchingMethod.HighLife:
                        save = Mathf.NegativeInfinity;
                        index = SearchParameter(nearbyUnits, (i) =>
                        {
                            if (!nearbyUnits[i].Health || save >= nearbyUnits[i].Health.Current)
                                return -1;

                            save = nearbyUnits[i].Health.Current;
                            return i;
                        });
                        break;
                    default:
                        throw new ArgumentOutOfRangeException();
                }
            }

            // Set the target only if she's near the unit
            return index != -1 && nearbyUnits[index] ? nearbyUnits[index] : null;
        }
    }
}
