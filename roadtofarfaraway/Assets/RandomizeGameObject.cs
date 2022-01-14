using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomizeGameObject : MonoBehaviour
{
    [Serializable]
    public class RandomizingRule
    {
        public GameObject GameObject;
        [Range(0f,1f)] public float Probability;
    }

    public List<RandomizingRule> RandomizingRules;

    void Start()
    {
        RescaleProbabilities();
        float RandomPoint = UnityEngine.Random.value;
        foreach(RandomizingRule Rule in RandomizingRules)
        {
            if (RandomPoint < Rule.Probability)
            {
                Instantiate(Rule.GameObject, transform.position, transform.rotation).transform.parent = transform;
                break;
            }
        }
    }

    private void RescaleProbabilities()
    {
        RandomizingRules.Sort((r1,r2) => r1.Probability.CompareTo(r2.Probability));
        float Sum = RandomizingRules.Sum(Rule => Rule.Probability);
        float Cursor = 0f;
        for (int i = 0; i < RandomizingRules.Count; i++)
        {
            Cursor += (RandomizingRules[i].Probability / Sum);
            RandomizingRules[i].Probability = (float)System.Math.Round(Cursor, 2);
        }
    }
}
