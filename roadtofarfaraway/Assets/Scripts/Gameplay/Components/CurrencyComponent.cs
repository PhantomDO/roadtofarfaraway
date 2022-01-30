using System.Runtime.InteropServices.WindowsRuntime;
using Managers;
using UnityEngine;

namespace Gameplay.Components
{
    public enum CurrencyOperation
    {
        Increase,
        Decrease,
        Define,
    }

    public abstract class CurrencyComponent<T> : MonoBehaviour where T : CurrencyComponent<T>
    {
        public delegate void DCurrencyUpdate(T component, float update);
        public static event DCurrencyUpdate OnCurrencyUpdate;
        
        [SerializeField] protected float max;
        
        protected float _current;
        public float Current
        {
            get => _current;
            protected set
            {
                _current = Mathf.Max(0, Mathf.Min(value, max));
                OnCurrencyUpdate?.Invoke((T)this, _current);
            }
        }
        
        public abstract float UpdateCurrency(float val, CurrencyOperation operation);

        public bool TryUpdateCurrency(float val, CurrencyOperation operation, out float updated)
        {
            var beforeUpdate = Current;
            updated = UpdateCurrency(val, operation);
            return Mathf.Abs(beforeUpdate - updated) > Mathf.Epsilon;
        }
        
        protected virtual void Start()
        {
            Current = max;
        }
    }
}