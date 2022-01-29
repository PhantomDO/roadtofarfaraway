using System.Collections.Generic;
using UnityEngine;

public class Tower : MonoBehaviour
{
    private int _currentTier;
    private List<GameObject> _upgrades;
    private readonly List<float> _healthTiers = new List<float>() { 100.0f, 150.0f, 200.0f };
    private float _maxHealth, _currentHealth;
    
    private static readonly int UpgradeTrigger = Animator.StringToHash("Upgrade");

    public delegate void DestroyTower(Tower tower);
    public static event DestroyTower OnDestroyTower;

    // Start is called before the first frame update
    void Start()
    {
        _upgrades = new List<GameObject>
        {
            transform.Find("Tier1").gameObject,
            transform.Find("Tier2").gameObject,
            transform.Find("Tier3").gameObject
        };

        _currentTier = 0;
        _maxHealth = _healthTiers[_currentTier];
        _currentHealth = _maxHealth;
    }

    public void ApplyDamage(float value)
    {
        _currentHealth -= value;
        if (_currentHealth <= 0)
        {
            OnDestroyTower?.Invoke(this);
        }
    }
    
    public void Upgrade()
    {
        _upgrades[_currentTier].SetActive(false);
        
        if (_currentTier + 1 == _upgrades.Count) return;
        
        _currentTier++;
        _maxHealth = _healthTiers[_currentTier];
        _currentHealth = _maxHealth;
        
        _upgrades[_currentTier].SetActive(true);
        if (_currentTier == 1)
            _upgrades[_currentTier].transform.Find("WoodenFence").GetComponent<Animator>().SetTrigger(UpgradeTrigger);
        else
            _upgrades[_currentTier].GetComponent<Animator>().SetTrigger(UpgradeTrigger);
    }
}
