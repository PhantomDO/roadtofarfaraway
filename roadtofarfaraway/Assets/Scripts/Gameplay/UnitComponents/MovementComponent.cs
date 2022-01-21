using System;
using System.Collections;
using UnityEngine;
using UnityEngine.AI;

namespace Gameplay.UnitComponents
{
    public class MovementComponent : MonoBehaviour
    {
        [SerializeField] private bool _canMove = false;
        [SerializeField] private float _moveSpeed = 10;
        [SerializeField] private float _threshold = 0.45f;
        
        private RadarComponent _radar;
        private NavMeshAgent _agent =null;
        private Rigidbody _rigidbody = null;
        private bool _hasLanded;

        private Vector2 _target2D;
        private Vector2 _transform2D;

        private void Awake()
        {
            _hasLanded = false;

            if (TryGetComponent(out _radar))
            {
                _canMove = true;
            }

            if (TryGetComponent(out _rigidbody))
            {
                StartCoroutine(UpdatePhysicsInAir(_rigidbody));
            }
        }

        private void FixedUpdate()
        {
            _transform2D = new Vector2(transform.position.x, transform.position.z);
            if (_radar.Target && _hasLanded)
            {
                var targetPosition = _radar.Target.transform.position;
                _target2D = new Vector2(targetPosition.x, targetPosition.z);

                if (Vector3.Distance(_agent.destination, targetPosition) > 0.05f)
                {
                    _agent.destination = targetPosition;
                }

                if (Vector2.Distance(_transform2D, _target2D) >= _threshold)
                {
                    // move
                }
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
        
        private IEnumerator UpdatePhysicsInAir(Rigidbody rb)
        {
            while (!Physics.Raycast(rb.transform.position, -Vector3.up, out RaycastHit hit, Mathf.Infinity))
            {
                yield return null;
            }
            
            while (Physics.Raycast(rb.transform.position, -Vector3.up, out RaycastHit hit, Mathf.Infinity))       //hit.collider.CompareTag("Ground"))
            {
                Debug.DrawLine(rb.position, rb.position - Vector3.up * 100.0f, Color.red);

                if (hit.distance <= 0.02f)
                {
                    rb.drag = 1.0f;
                    rb.angularDrag = 1.0f;

                    if (!_hasLanded)
                    {
                        _agent = gameObject.AddComponent<NavMeshAgent>();
                        rb.AddForce(-rb.velocity * 2);
                        _hasLanded = true;
                    }

                    yield break;
                }
                rb.AddForce(Physics.gravity * 2);
                yield return new WaitForFixedUpdate();
            }
        }
    }
}