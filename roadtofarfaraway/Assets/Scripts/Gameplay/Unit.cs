
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Managers;
using Gameplay.UnitComponents;

namespace Gameplay
{
    public enum UnitType : int
    {
        Null = -1,
        Shrek = 0,
        Donkey = 1,
        Fiona = 2,
        Dragon = 3,
        // More to come
    }

    public class Unit : MonoBehaviour
    {
        [field: SerializeField] public UnitType Type { get; private set; }

        [field: SerializeField] public bool isDraguable { get; private set; }

        private void Awake()
        {
            isDraguable = true;
            GameEventManager.OnDropUnitInWorld += DropUnitInWorld;
        }
        private void OnDestroy()
        {
            GameEventManager.OnDropUnitInWorld -= DropUnitInWorld;
        }

        private void DropUnitInWorld(Unit unit)
        {
            if (unit == this)
            {
                isDraguable = false;
                if (TryGetComponent(out Rigidbody rb))
                {
                    StartCoroutine(UpdatePhysicsInAir(rb));
                }
            }
        }

        private IEnumerator UpdatePhysicsInAir(Rigidbody rb)
        {
            while (Physics.Raycast(rb.transform.position, -Vector3.up, out RaycastHit hit, Mathf.Infinity) &&
                hit.collider.CompareTag("Ground"))
            {
                if (hit.distance <= 0.02f)
                {
                    rb.drag = 1.0f;
                    rb.angularDrag = 1.0f;
                    yield break;
                }
                
                rb.AddForce(Physics.gravity);
                rb.drag = 1.0f;
                rb.angularDrag = 1.0f;
                yield return new WaitForFixedUpdate();
            }
        }
    }
}