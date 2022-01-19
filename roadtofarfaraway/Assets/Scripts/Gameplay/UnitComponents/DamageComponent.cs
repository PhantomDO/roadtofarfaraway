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
        [SerializeField] private float _damage;
        [SerializeField] private float _fireRate;

        private float _rateSinceAttack;
        private RadarComponent _radar;

        private void Awake()
        {
            _rateSinceAttack = 0f;

            if (TryGetComponent(out _radar))
            {
                Debug.Log($"Got a radar");
            }
        }

        private void Update()
        {
            if (_radar && _radar.Target)
            {
                // Attack the nearest target
                if (Time.time - _rateSinceAttack >= _fireRate)
                {
                    GameEventManager.Instance?.DamageUnit(_damage, _radar.Target);
                    _rateSinceAttack = Time.time;
                }
            }
        }
    }
}