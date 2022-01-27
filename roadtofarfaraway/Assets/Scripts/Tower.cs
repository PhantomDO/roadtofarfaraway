using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tower : MonoBehaviour
{
    private int _currentTier = 0;
    private List<GameObject> _upgrades;
    
    // Start is called before the first frame update
    void Start()
    {
        _upgrades = new List<GameObject>();
        _upgrades.Add(transform.Find("Tier1").gameObject);
        _upgrades.Add(transform.Find("Tier2").gameObject);
        _upgrades.Add(transform.Find("Tier3").gameObject);
    }

    public void Upgrade()
    {
        _upgrades[_currentTier].SetActive(false);
        
        if (_currentTier + 1 == _upgrades.Count) return;
        
        _currentTier++;
        _upgrades[_currentTier].SetActive(true);
        if (_currentTier == 1)
            _upgrades[_currentTier].transform.Find("WoodenFence").GetComponent<Animator>().SetTrigger("Upgrade");
        else
            _upgrades[_currentTier].GetComponent<Animator>().SetTrigger("Upgrade");
    }
}
