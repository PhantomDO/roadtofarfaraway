using UnityEngine;

namespace Gameplay
{
    public class Spawner : MonoBehaviour
    {
        [field: SerializeField] public Transform SpawnPosition { get; private set; }
        [field: SerializeField] public Transform HeightPosition { get; private set; }

        public void ShootWithGravity(Rigidbody shooted, Vector3 target)
        {
            Vector3 offset = target - SpawnPosition.position;

            float height = Mathf.Abs(HeightPosition.position.y - target.y);
            Debug.Log($"H: {height}");
            Vector3 halfRange = new Vector3(offset.x, 0, offset.z);

            float vy = Mathf.Sqrt(-2 * Physics.gravity.y * height);
            Vector3 vxz = -(halfRange * Physics.gravity.y) / vy;
            
            shooted.velocity = new Vector3(vxz.x, vy, vxz.z);
            shooted.useGravity = true;
        }
    }
}