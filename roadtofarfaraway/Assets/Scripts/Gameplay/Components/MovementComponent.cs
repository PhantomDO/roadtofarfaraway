using System;
using System.Collections;
using GameState;
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
        [SerializeField] private float _rotateDegreeSpeed = 15;
        [SerializeField] private float _dragInAir = 0.1f;
        
        public Rigidbody Rigidbody { get; private set; }
        public NavMeshAgent Agent { get; private set; }

        private RadarComponent _radar;
        private bool _isGrounded;

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

            GameStateManager.OnGameStateChanged += OnGameStateChanged;
        }

        private void OnDestroy()
        {
            GameStateManager.OnGameStateChanged -= OnGameStateChanged;
        }

        private void FixedUpdate()
        {
            if (!_isGrounded)
            {
                Rigidbody.velocity -= Rigidbody.velocity * (_dragInAir * Time.fixedDeltaTime);
                return;
            }

            if (!_radar.Target)
            {
                Agent.velocity = Vector3.zero;
                return;
            }

            var targetPosition = _radar.Target.transform.position;

            RotateTo(Agent.steeringTarget);

            if (Vector3.Distance(Agent.destination, targetPosition) > 0.05f)
            {
                Agent.destination = targetPosition;
            }

            //MoveTo(Agent.nextPosition);
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

        /// <summary>
        /// Rotation method, rotate to the next point
        /// </summary>
        /// <param name="nextPosition"></param>
        public void RotateTo(Vector3 nextPosition)
        {
            if (!_canMove) return;

            var rotation = transform.rotation;
            var direction = nextPosition - transform.position;
            var rotateTowards = Vector3.RotateTowards(transform.forward, direction,
                Time.deltaTime * _rotateDegreeSpeed, 0.0f);
            var lookRotation = Quaternion.LookRotation(rotateTowards);
            transform.rotation = lookRotation;
            //Debug.Log($"[{name}] rotate toward: {rotateTowards}, lookrotation: {lookRotation}, tr.rot: {transform.rotation}");
        }

        private void OnCollisionEnter(Collision collision)
        {
            if (!_isGrounded)
            {
                Agent = gameObject.AddComponent<NavMeshAgent>();
                if (Rigidbody)
                {
                    Rigidbody.velocity = Vector3.zero;
                    Rigidbody.angularVelocity = Vector3.zero;
                    Rigidbody.isKinematic = true;
                    //Agent.updatePosition = false;
                    Agent.updateRotation = false;
                }
                _isGrounded = true;
                OnLandingComplete?.Invoke(this);
            }
        }

        public void OnGameStateChanged(GameState.GameState newGameState)
        {
            enabled = GameStateManager.Instance.CurrentGameState == GameState.GameState.Gameplay;
            if (Agent)
            {
                Agent.enabled = enabled;
            }
        }
    }
}