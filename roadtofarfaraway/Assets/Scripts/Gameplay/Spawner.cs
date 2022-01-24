using System.Collections.Generic;
using Managers;
using UnityEngine;

namespace Gameplay
{
    public class Spawner : MonoBehaviour
    {
        [field: SerializeField] public Transform SpawnTransform { get; private set; }
        [field: SerializeField] public Transform HeightTransform { get; private set; }

        [SerializeField, Range(0.0f, 100.0f)] private float _gravity = 9.81f;

        private Queue<Rigidbody> _launchedQueue;
        private LaunchData _latestLaunchData;


        private void Awake()
        {
            GameEventManager.OnUnitLanded += OnUnitLanded;
        }

        private void OnDestroy()
        {
            GameEventManager.OnUnitLanded -= OnUnitLanded;
        }

        private void Start()
        {
            _launchedQueue = new Queue<Rigidbody>();
        }

        public void ShootWithGravity(Rigidbody launch, Vector3 target)
        {
            Debug.Log($"Shoot {launch.name}!!");

            _latestLaunchData = CalculateLaunchData(target, launch.position);
            _launchedQueue.Enqueue(launch);

            Physics.gravity = Vector3.up * _gravity * -2;
            launch.useGravity = true;
            launch.velocity = _latestLaunchData.initialVelocity;
        }

        #region Events

        private void OnUnitLanded(Unit landedUnit)
        {
            if (landedUnit.TryGetComponent(out Rigidbody rb) && rb == _launchedQueue.Peek())
            {
                _launchedQueue.Dequeue();
            }

            if (_launchedQueue.Count <= 0)
            {
                Physics.gravity = Vector3.up * _gravity * -1;
                Debug.LogWarning($"No more rigidbody in the queue.");
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
            float height = HeightTransform.position.y;

            Vector3 offset = target - position;
            float time = Mathf.Sqrt(-2 * height / (gravity * 2)) +
                         Mathf.Sqrt(2 * (offset.y - height) / gravity);

            Vector3 vy = Vector3.up * Mathf.Sqrt(-2 * gravity * height);
            Vector3 vxz = new Vector3(offset.x, 0, offset.z) / time;

            return new LaunchData(vxz + vy * -Mathf.Sign(gravity), time);
        }

        #endregion
    }
}