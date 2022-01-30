using System;
using System.Collections;
using Managers;
using UnityEngine;
using UnityEngine.AI;

namespace Gameplay.Components
{
    public class MovementComponent : MonoBehaviour
    {
        public delegate void DLandedComplete(MovementComponent component);
        public static event DLandedComplete OnLandingComplete;

        [SerializeField] private bool _canMove = false;
        [SerializeField] private float _moveSpeed = 10;
        [SerializeField] private float _dragInAir = 0.1f;
        
        public Rigidbody Rigidbody { get; private set; }
        public NavMeshAgent Agent { get; private set; }

        private RadarComponent _radar;
        private bool _isGrounded;

        private Vector2 _target2D;
        private Vector2 _transform2D;

        private void Awake()
        {
            _isGrounded = false;

            if (TryGetComponent(out _radar))
            {
                _canMove = true;
            }

            if (TryGetComponent(out Rigidbody rb))
            {
                Rigidbody = rb;
            }
        }

        private void FixedUpdate()
        {
            _transform2D = new Vector2(transform.position.x, transform.position.z);

            if (!_isGrounded)
            {
                Rigidbody.velocity -= Rigidbody.velocity * (_dragInAir * Time.fixedDeltaTime);
                return;
            }

            if (!_radar.Target) return;

            var targetPosition = _radar.Target.transform.position;
            _target2D = new Vector2(targetPosition.x, targetPosition.z);

            if (Vector3.Distance(Agent.destination, targetPosition) > 0.05f)
            {
                Agent.destination = targetPosition;
            }
        }

        /// <summary>
        /// Movement method, move to the next point
        /// </summary>
        /// <param name="nextPosition"></param>
        public void MoveTo(Vector3 nextPosition)
        {
            if (!_canMove) return;

            var position = transform.position;
            var direction = (nextPosition - position).normalized;
            transform.position = Vector3.MoveTowards(position, direction, Time.deltaTime * (_moveSpeed));
        }

        private void OnCollisionEnter(Collision collision)
        {
            if (!_isGrounded)
            {
                Agent = gameObject.AddComponent<NavMeshAgent>();
                Rigidbody.velocity = Vector3.zero;
                Rigidbody.angularVelocity = Vector3.zero;
                _isGrounded = true;
                OnLandingComplete?.Invoke(this);
            }
        }
    }
}