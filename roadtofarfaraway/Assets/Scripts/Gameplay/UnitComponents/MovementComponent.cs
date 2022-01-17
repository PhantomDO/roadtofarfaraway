using UnityEngine;

namespace Gameplay.UnitComponents
{
    public class MovementComponent : MonoBehaviour
    {
        [SerializeField] private bool _canMove = true;
        [SerializeField] private float _moveSpeed = 10;
        
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
    }
}