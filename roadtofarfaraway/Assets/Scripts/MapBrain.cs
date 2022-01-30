using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Gameplay;
using Gameplay.Components;
using UnityEngine;
using Random = UnityEngine.Random;

public class MapBrain : MonoBehaviour
{
    [Header("Genetic algorithm parameters")]
    [SerializeField, Range(20, 100)]
    private int populationSize = 20;
    [SerializeField, Range(0, 100)]
    private int crossoverRate = 100;
    private double _crossoverRatePercent;
    [SerializeField, Range(0, 100)]
    private int mutationRate;
    private double _mutationRatePercent;
    [SerializeField, Range(1, 100)]
    private int generationLimit = 10;

    // Algorithm variables
    private List<CandidateMap> _currentGeneration;
    private int _totalFitnessCurrentGeneration, _bestFitnessAllTime;
    public CandidateMap BestMap { get; private set; }
    private int _bestMapGenerationNumber, _generationNumber;
        
    [Header("Fitness parameters")]
    [SerializeField]
    private int minCorners = 6;
    [SerializeField]
    private int maxCorners = 12;
    [SerializeField, Range(1, 3)]
    private int cornersWeight = 1, repetitiveCornersWeight = 1;
    [SerializeField, Range(0.3f, 1f)]
    private float obstaclesWeight = 1;
    [SerializeField, Range(1, 5)]
    private int pathWeight = 1;

    [Header("Map start parameters")]
    [SerializeField, Range(3, 20)]
    private int mapWidth = 10;
    [SerializeField, Range(3, 20)]
    private int mapLength = 10;
    private Vector3 _startPosition, _endPosition;
    private MapGrid _grid;
    [SerializeField]
    private Direction startEdge = Direction.Left, endEdge = Direction.Right;
    [SerializeField]
    private bool randomStartAndEnd;
    [SerializeField, Range(4, 9)]
    private int knightPiecesNumber = 7;
    [SerializeField, Range(0, 3)]
    private int numberOfTowers = 2;

    [Header("Grid visualization")]
    public MapVisualizer mapVisualizer;
    private DateTime _startDate, _endDate;

    public bool IsAlgorithmRunning { get; private set; }

    private void Start()
    {
        _crossoverRatePercent = crossoverRate / 100D;
        _mutationRatePercent = mutationRate / 100D;

        RunAlgorithm();
    }
    
    private void OnEnable()
    {
        HealthComponent.OnDestroyUnit += DestroyTower;
    }

    private void OnDisable()
    {
        HealthComponent.OnDestroyUnit -= DestroyTower;
    }

    public void RunAlgorithm()
    {
        UIController.instance.ResetScreen();
        ResetAlgorithmVariables();
        mapVisualizer.ClearMap();
        _grid = new MapGrid(mapLength, mapWidth);
        MapHelper.SetStartAndEndPositions(_grid, ref _startPosition, out _endPosition, randomStartAndEnd, startEdge, endEdge);

        IsAlgorithmRunning = true;
        _startDate = DateTime.Now;
        FindOptimalSolution(_grid);
    }

    private void ResetAlgorithmVariables()
    {
        _totalFitnessCurrentGeneration = 0;
        _bestFitnessAllTime = 0;
        BestMap = null;
        _bestMapGenerationNumber = 0;
        _generationNumber = 0;
    }

    private void FindOptimalSolution(MapGrid grid)
    {
        _currentGeneration = new List<CandidateMap>(populationSize);
        for (int i =0; i < populationSize; i++)
        {
            CandidateMap candidateMap = new CandidateMap(grid, knightPiecesNumber, numberOfTowers);
            candidateMap.CreateMap(_startPosition, _endPosition, true);
            _currentGeneration.Add(candidateMap);
        }
        StartCoroutine(GeneticAlgorithm());
    }

    private IEnumerator GeneticAlgorithm()
    {
        _totalFitnessCurrentGeneration = 0;
        int bestFitnessCurrentGeneration = 0;
        CandidateMap bestMapCurrentGeneration = null;
        foreach(CandidateMap candidateMap in _currentGeneration)
        {
            candidateMap.FindPath();
            candidateMap.Repair();
            candidateMap.GenerateTowers();
            int fitness = CalculateFitness(candidateMap.ReturnMapData());

            _totalFitnessCurrentGeneration += fitness;
            if (fitness > bestFitnessCurrentGeneration)
            {
                bestFitnessCurrentGeneration = fitness;
                bestMapCurrentGeneration = candidateMap;
            }
        }

        if (bestFitnessCurrentGeneration > _bestFitnessAllTime)
        {
            _bestFitnessAllTime = bestFitnessCurrentGeneration;
            if (bestMapCurrentGeneration != null) BestMap = bestMapCurrentGeneration.DeepClone();
            _bestMapGenerationNumber = _generationNumber;
        }

        yield return new WaitForEndOfFrame();

        UIController.instance.SetLoadingValue(_generationNumber / (float)generationLimit);
        Debug.Log("Current generation " + _generationNumber + " score: " + bestFitnessCurrentGeneration);
        _generationNumber++;

        if (_generationNumber < generationLimit)
        {
            List<CandidateMap> nextGeneration = new List<CandidateMap>();
            while (nextGeneration.Count < populationSize)
            {
                CandidateMap parent1 = _currentGeneration[RouletteWheelSelection()];
                CandidateMap parent2 = _currentGeneration[RouletteWheelSelection()];

                CrossoverParents(parent1, parent2, out var child1, out var child2);

                child1.AddMutation(_mutationRatePercent);
                child2.AddMutation(_mutationRatePercent);

                nextGeneration.Add(child1);
                nextGeneration.Add(child2);
            }
            _currentGeneration = nextGeneration;
            StartCoroutine(GeneticAlgorithm());
        }
        else
        {
            ShowResults();
        }
    }

    private int CalculateFitness(MapData mapData)
    {
        int obstaclesCount = mapData.obstacleArray.Count(isObstacle => isObstacle);
        int score = mapData.path.Count * pathWeight + (int)(obstaclesCount * obstaclesWeight);
        int cornersCount = mapData.cornersPosition.Count;
        if (cornersCount >= minCorners && cornersCount <= maxCorners)
        {
            score += cornersCount * cornersWeight;
        }
        else if (cornersCount > maxCorners)
        {
            score -= cornersWeight * (cornersCount - maxCorners);
        }
        else if (cornersCount < minCorners)
        {
            score -= cornersWeight * (minCorners - cornersCount);
        }
        score -= mapData.repetitiveCornersCount * repetitiveCornersWeight;
        return score;
    }

    private int RouletteWheelSelection()
    {
        int randomValue = Random.Range(0, _totalFitnessCurrentGeneration);
        for (int i = 0; i < populationSize; i++)
        {
            randomValue -= CalculateFitness(_currentGeneration[i].ReturnMapData());
            if (randomValue <= 0) { return i; }
        }
        return populationSize - 1;
    }

    private void CrossoverParents(CandidateMap parent1, CandidateMap parent2, out CandidateMap child1, out CandidateMap child2)
    {
        child1 = parent1.DeepClone();
        child2 = parent2.DeepClone();

        if (Random.value < _crossoverRatePercent)
        {
            int size = parent1.ObstaclesArray.Length;
            int index = Random.Range(0, parent1.ObstaclesArray.Length);
            for (int i = index; i < size; i++)
            {
                child1.PlaceObstacle(i, parent2.IsObstacleAt(i));
                child2.PlaceObstacle(i, parent1.IsObstacleAt(i));
            }
        }
    }

    private void DestroyTower(Unit unit)
    {
        if (unit is Tower tower)
        {
            mapVisualizer.DestroyTower(tower, BestMap.ReturnMapData(), out Vector3 position);
            int index = BestMap.Towers.FindIndex(pos => pos == position);
            BestMap.Towers.RemoveAt(index);
            UpgradeTowers();
        }
    }

    private void UpgradeTowers()
    {
        foreach (Vector3 position in BestMap.Towers)
        {
            mapVisualizer.gameObjects[position].GetComponent<Tower>().Upgrade();
        }
    }

    private void ShowResults()
    {
        IsAlgorithmRunning = false;
        Debug.Log("Best solution at generation " + _bestMapGenerationNumber + " with score: " + _bestFitnessAllTime);

        MapData data = BestMap.ReturnMapData();
        mapVisualizer.VisualizeMap(BestMap.Grid, data, startEdge, endEdge);
        //bestMap.DebugCellObjectType();

        UIController.instance.HideLoadingScreen();

        Debug.Log("Path length: " + data.path.Count);
        Debug.Log("Corners count: " + data.cornersPosition.Count);

        _endDate = DateTime.Now;
        long elapsedTicks = _endDate.Ticks - _startDate.Ticks;
        TimeSpan elapsedSpan = new TimeSpan(elapsedTicks);
        Debug.Log("Time needed to run this genetic optimisation: " + elapsedSpan.TotalSeconds + "s");
    }
}