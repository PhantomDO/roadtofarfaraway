using System;
using System.Collections.Generic;
using System.Text;
using GameState;
using Managers;
using UnityEngine;

namespace Gameplay.Components
{
    public class DamageComponent : MonoBehaviour
    {
        [SerializeField] private float _damage;
        [SerializeField] private float _fireRate;
        [SerializeField, Range(30f, 180f)] private float _fov = 90f;
        [SerializeField] private float _range = 1f;

        private float _rateSinceAttack;
        private RadarComponent _radar;
        private SphereCollider _collider;

        private Vector3 _transform2D;
        private Vector3 _target2D;

        private Unit _latestTarget;
        private HealthComponent _latestHealthComponent;

        private void Awake()
        {
            _rateSinceAttack = 0f;

            if (TryGetComponent(out _radar))
            {
            }

            _collider = gameObject.AddComponent<SphereCollider>();
            _collider.center = new Vector3(0, 1, 0);
            _collider.radius = _range;
            _collider.isTrigger = true;
            GameStateManager.OnGameStateChanged += OnGameStateChanged;
            HealthComponent.OnDestroyUnit += DestroyUnit;
        }

        private void OnDestroy()
        {
            GameStateManager.OnGameStateChanged -= OnGameStateChanged;
            HealthComponent.OnDestroyUnit -= DestroyUnit;
        }

        private void Update()
        {
            _transform2D = new Vector3(transform.position.x, 0, transform.position.z);
            if (_radar != null)
            {
                if (_latestTarget != _radar.Target || _latestTarget == null)
                {
                    _latestTarget = _radar.Target;
                    _latestHealthComponent = null;
                    if (_latestTarget != null && _latestTarget.Health != null)
                    {
                        _latestHealthComponent = _latestTarget.Health;
                    }
                }

                if (_latestTarget != null)
                {
                    var targetPosition = _latestTarget.transform.position;
                    _target2D = new Vector3(targetPosition.x, 0, targetPosition.z);
                    
                    var angle = Mathf.Max(0, 1f - (_fov / 180f));
                    var direction = (_target2D - _transform2D).normalized;
                    var dot = Vector3.Dot(direction, transform.forward);
#if UNITY_EDITOR
                    //Debug.DrawLine(_transform2D, transform.position + direction * _collider.radius, Color.magenta);
                    //Debug.DrawLine(_transform2D, transform.position + transform.forward * _collider.radius, Color.cyan);

                    //Debug.Log($"Distance: {Vector3.Distance(_transform2D, _target2D)}");
                    //Debug.Log($"Dot (direction, forward): {dot}, Angle: {angle}");
#endif
                    // Attack the nearest target
                    if (Time.time - _rateSinceAttack >= _fireRate && Mathf.Abs(dot) > angle &&
                        _latestHealthComponent != null && Vector3.Distance(_transform2D, _target2D) <= _collider.radius &&
                        _latestHealthComponent.TryUpdateCurrency(_damage, CurrencyOperation.Decrease, out float updated))
                    {
                        _rateSinceAttack = Time.time;
                    }
                }
            }
        }
        
#if UNITY_EDITOR
        private void OnDrawGizmos()
        {
            if (_collider != null)
            {
                UnityEditor.Handles.color = Gizmos.color = Color.magenta;
                Gizmos.DrawLine(transform.position,
                    transform.position + (-transform.right + transform.forward) * _collider.radius);
                Gizmos.DrawLine(transform.position,
                    transform.position + (transform.right + transform.forward) * _collider.radius);
                UnityEditor.Handles.DrawWireArc(transform.position, transform.up,
                    (-transform.right + transform.forward), _fov, _collider.radius);
            }
        }
#endif
        private void DestroyUnit(Unit unit)
        {
            if (unit != _latestTarget) return;
            
            if (!TryGetComponent(out Unit thisUnit)) return;

            // gain money
            foreach (var spawner in GameManager.Instance?.Spawners)
            {
                if (spawner.SpawnedUnits.Contains(thisUnit))
                {
                    spawner.Money.UpdateCurrency(unit.Parameters.GoldDeathDrop, CurrencyOperation.Increase);

                    break;
                }
            }
        }

        public void OnGameStateChanged(GameState.GameState newGameState)
        {
            enabled = GameStateManager.Instance.CurrentGameState == GameState.GameState.Gameplay;
        }
    }
}