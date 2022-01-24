using System;
using System.Collections;
using Managers;
using UnityEngine;
using UnityEngine.AI;

namespace Gameplay.UnitComponents
{
    public class MovementComponent : MonoBehaviour
    {
        [SerializeField] private bool _canMove = false;
        [SerializeField] private float _moveSpeed = 10;
        [SerializeField] private float _dragInAir = 0.1f;
        
        private RadarComponent _radar;
        private NavMeshAgent _agent =null;
        private Rigidbody _rigidbody = null;
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

            if (TryGetComponent(out _rigidbody))
            {
                // Get rigidbody
            }
        }

        private void FixedUpdate()
        {
            _transform2D = new Vector2(transform.position.x, transform.position.z);

            if (!_isGrounded)
            {
                _rigidbody.velocity -= _rigidbody.velocity * _dragInAir * Time.fixedDeltaTime;
                return;
            }

            if (!_radar.Target) return;

            var targetPosition = _radar.Target.transform.position;
            _target2D = new Vector2(targetPosition.x, targetPosition.z);

            if (Vector3.Distance(_agent.destination, targetPosition) > 0.05f)
            {
                _agent.destination = targetPosition;
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
                _agent = gameObject.AddComponent<NavMeshAgent>();
                _rigidbody.velocity = Vector3.zero;
                _rigidbody.angularVelocity = Vector3.zero;
                _isGrounded = true;

                if (TryGetComponent(out Unit unit))
                {
                    GameEventManager.Instance?.UnitLanded(unit);
                }
            }
        }
    }
}