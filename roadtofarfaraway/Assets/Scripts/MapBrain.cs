using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using Random = UnityEngine.Random;

namespace FFA.MapGeneration
{
    public class MapBrain : MonoBehaviour
    {
        [Header("Genetic algorithm parameters")]
        [SerializeField, Range(20, 100)]
        private int populationSize = 20;
        [SerializeField, Range(0, 100)]
        private int crossoverRate = 100;
        private double crossoverRatePercent;
        [SerializeField, Range(0, 100)]
        private int mutationRate = 0;
        private double mutationRatePercent;
        [SerializeField, Range(1, 100)]
        private int generationLimit = 10;

        // Algorithm variables
        private List<CandidateMap> currentGeneration;
        private int totalFitnessCurrentGeneration, bestFitnessAllTime = 0;
        private CandidateMap bestMap = null;
        private int bestMapGenerationNumber = 0, generationNumber = 0;

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
        private Vector3 startPosition, endPosition;
        private MapGrid grid;
        [SerializeField]
        private Direction startEdge = Direction.Left, endEdge = Direction.Right;
        [SerializeField]
        private bool randomStartAndEnd = false;
        [SerializeField, Range(4, 9)]
        private int knightPiecesNumber = 7;
        [SerializeField, Range(0, 3)]
        private int numberOfTowers = 2;

        [Header("Grid visualization")]
        public MapVisualizer mapVisualizer;
        private DateTime startDate, endDate;
        private bool isAlgorithmRunning = false;

        public bool IsAlgorithmRunning { get => isAlgorithmRunning; }

        private void Start()
        {
            crossoverRatePercent = crossoverRate / 100D;
            mutationRatePercent = mutationRate / 100D;
        }

        public void RunAlgorithm()
        {
            UIController.instance.ResetScreen();
            ResetAlgorithmVariables();
            mapVisualizer.ClearMap();
            grid = new MapGrid(mapLength, mapWidth);
            MapHelper.SetStartAndEndPositions(grid, ref startPosition, ref endPosition, randomStartAndEnd, startEdge, endEdge);

            isAlgorithmRunning = true;
            startDate = DateTime.Now;
            FindOptimalSolution(grid);
        }

        private void ResetAlgorithmVariables()
        {
            totalFitnessCurrentGeneration = 0;
            bestFitnessAllTime = 0;
            bestMap = null;
            bestMapGenerationNumber = 0;
            generationNumber = 0;
        }

        private void FindOptimalSolution(MapGrid grid)
        {
            currentGeneration = new List<CandidateMap>(populationSize);
            for (int i =0; i < populationSize; i++)
            {
                CandidateMap candidateMap = new CandidateMap(grid, knightPiecesNumber, numberOfTowers);
                candidateMap.CreateMap(startPosition, endPosition, true);
                currentGeneration.Add(candidateMap);
            }
            StartCoroutine(GeneticAlgorithm());
        }

        private IEnumerator GeneticAlgorithm()
        {
            totalFitnessCurrentGeneration = 0;
            int bestFitnessCurrentGeneration = 0;
            CandidateMap bestMapCurrentGeneration = null;
            foreach(CandidateMap candidateMap in currentGeneration)
            {
                candidateMap.FindPath();
                candidateMap.Repair();
                candidateMap.GenerateTowers();
                int fitness = CalculateFitness(candidateMap.ReturnMapData());

                totalFitnessCurrentGeneration += fitness;
                if (fitness > bestFitnessCurrentGeneration)
                {
                    bestFitnessCurrentGeneration = fitness;
                    bestMapCurrentGeneration = candidateMap;
                }
            }

            if (bestFitnessCurrentGeneration > bestFitnessAllTime)
            {
                bestFitnessAllTime = bestFitnessCurrentGeneration;
                bestMap = bestMapCurrentGeneration.DeepClone();
                bestMapGenerationNumber = generationNumber;
            }

            yield return new WaitForEndOfFrame();

            UIController.instance.SetLoadingValue(generationNumber / (float)generationLimit);
            Debug.Log("Current generation " + generationNumber + " score: " + bestFitnessCurrentGeneration);
            generationNumber++;

            if (generationNumber < generationLimit)
            {
                List<CandidateMap> nextGeneration = new List<CandidateMap>();
                while (nextGeneration.Count < populationSize)
                {
                    CandidateMap parent1 = currentGeneration[RouletteWheelSelection()];
                    CandidateMap parent2 = currentGeneration[RouletteWheelSelection()];
                    CandidateMap child1, child2;

                    CrossoverParents(parent1, parent2, out child1, out child2);

                    child1.AddMutation(mutationRatePercent);
                    child2.AddMutation(mutationRatePercent);

                    nextGeneration.Add(child1);
                    nextGeneration.Add(child2);
                }
                currentGeneration = nextGeneration;
                StartCoroutine(GeneticAlgorithm());
            }
            else
            {
                ShowResults();
            }
        }

        private int CalculateFitness(MapData mapData)
        {
            int obstaclesCount = mapData.obstacleArray.Where(isObstacle => isObstacle).Count();
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
            int randomValue = Random.Range(0, totalFitnessCurrentGeneration);
            for (int i = 0; i < populationSize; i++)
            {
                randomValue -= CalculateFitness(currentGeneration[i].ReturnMapData());
                if (randomValue <= 0) { return i; }
            }
            return populationSize - 1;
        }

        private void CrossoverParents(CandidateMap parent1, CandidateMap parent2, out CandidateMap child1, out CandidateMap child2)
        {
            child1 = parent1.DeepClone();
            child2 = parent2.DeepClone();

            if (Random.value < crossoverRatePercent)
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

        private void ShowResults()
        {
            isAlgorithmRunning = false;
            Debug.Log("Best solution at generation " + bestMapGenerationNumber + " with score: " + bestFitnessAllTime);

            MapData data = bestMap.ReturnMapData();
            mapVisualizer.VisualizeMap(bestMap.Grid, data, true);
            //bestMap.DebugCellObjectType();

            UIController.instance.HideLoadingScreen();

            Debug.Log("Path length: " + data.path.Count);
            Debug.Log("Corners count: " + data.cornersPosition.Count);

            endDate = DateTime.Now;
            long elapsedTicks = endDate.Ticks - startDate.Ticks;
            TimeSpan elapsedSpan = elapsedSpan = new TimeSpan(elapsedTicks);
            Debug.Log("Time needed to run this genetic optimisation: " + elapsedSpan.TotalSeconds + "s");
        }
    }
}