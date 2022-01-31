using System.Collections.Generic;
using Managers;
using UnityEngine;

namespace Gameplay.Components
{
    [RequireComponent(typeof(MoneyComponent))]
    public class SpawnerComponent : MonoBehaviour
    {
        public delegate void DRegisterSpawner(SpawnerComponent component);
        public static event DRegisterSpawner OnRegisterSpawner;
        
        [field: SerializeField] public Transform UnitContainer { get; private set; }
        [field: SerializeField] public Transform LaunchTransform { get; private set; }
        [field: SerializeField] public float Height { get; private set; }

        [SerializeField, Range(0.0f, 100.0f)] private float _gravity = 9.81f;

        [field: SerializeField] public List<Unit> SpawnedUnits { get; private set; }
        [field: SerializeField] public MoneyComponent Money { get; private set; }

        private Queue<Unit> _launchedQueue;
        private LaunchData _latestLaunchData;
        private int spawnCount = 0;

        private void Awake()
        {
            MovementComponent.OnLandingComplete += LandingComplete;
            HealthComponent.OnDestroyUnit += DestroyUnit;

            Money = GetComponent<MoneyComponent>();
        }

        private void OnDestroy()
        {
            MovementComponent.OnLandingComplete -= LandingComplete;
            HealthComponent.OnDestroyUnit -= DestroyUnit;
        }

        private void Start()
        {
            SpawnedUnits = new List<Unit>();
            _launchedQueue = new Queue<Unit>();
            OnRegisterSpawner?.Invoke(this);
        }

        public Unit SpawnUnit(UnitType type, Vector3 position)
        {
            Unit spawnedUnit = null;
            if (GameManager.Instance != null)
            {
                var parameters = GameManager.Instance.TypesParameters[type];

                if (parameters.Prefab != null && Money != null &&
                    Money.TryUpdateCurrency(parameters.Cost, CurrencyOperation.Decrease, out float updated))
                {
                    spawnedUnit = Instantiate(parameters.Prefab, LaunchTransform.position,
                        Quaternion.identity, UnitContainer);
                    spawnedUnit.name = $"{parameters.Prefab.name} ({spawnCount++})";
                    ShootWithGravity(spawnedUnit, position);
                }
            }

            return spawnedUnit;
        }
        
        public bool TrySpawnUnit(UnitType type, Vector3 position, out Unit spawnedUnit)
        {
            spawnedUnit = SpawnUnit(type, position);
            return spawnedUnit != null;
        }

        private void ShootWithGravity(Unit unit, Vector3 target)
        {
            SpawnedUnits.Add(unit);

            var rb = unit.Movement.Rigidbody;
            if (rb)
            {
                _latestLaunchData = CalculateLaunchData(target, rb.position);
                _launchedQueue.Enqueue(unit);

                Physics.gravity = Vector3.up * _gravity * -2;
                rb.useGravity = true;
                rb.velocity = _latestLaunchData.initialVelocity;
            }
        }

        #region Events

        private void DestroyUnit(Unit unit)
        {
            if (SpawnedUnits.Contains(unit))
            {
                SpawnedUnits.Remove(unit);
            }
        }

        private void LandingComplete(MovementComponent component)
        {
            if (_launchedQueue.Count <= 0) return;

            if (component.TryGetComponent(out Unit unit) && unit == _launchedQueue.Peek())
            {
                _launchedQueue.Dequeue();
                if (_launchedQueue.Count <= 0)
                {
                    Physics.gravity = Vector3.up * _gravity * -1;
                    Debug.LogWarning($"No more rigidbody in the queue.");
                }
            }
        }

        #endregion

        #region LaunchData

        /// <summary>
        /// https://github.com/SebLague/Kinematic-Equation-Problems/blob/master/Kinematics%20problem%2002/Assets/Scripts/BallLauncher.cs
        /// </summary>
        /// <returns></returns>
        public struct LaunchData
        {
            public readonly Vector3 initialVelocity;
            public readonly float timeToTarget;

            public LaunchData(Vector3 initialVelocity, float timeToTarget)
            {
                this.initialVelocity = initialVelocity;
                this.timeToTarget = timeToTarget;
            }
        }

        private LaunchData CalculateLaunchData(Vector3 target, Vector3 position)
        {
            float gravity = _gravity * -2;

            Vector3 offset = target - position;
            float time = Mathf.Sqrt(-2 * Height / (gravity * 2)) +
                         Mathf.Sqrt(2 * (offset.y - Height) / gravity);

            Vector3 vy = Vector3.up * Mathf.Sqrt(-2 * gravity * Height);
            Vector3 vxz = new Vector3(offset.x, 0, offset.z) / time;

            return new LaunchData(vxz + vy * -Mathf.Sign(gravity), time);
        }

        #endregion
    }
}