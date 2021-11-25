using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class LevelGeneration : MonoBehaviour
{
    int[,] _TileGrid;
    Tilemap _TerrainTilemap;
    Tilemap _BuildingsTilemap;

    [Header("Level Parameters")]
    public int LevelWidth = 10;
    public int LevelLength = 10;

    [Header("Rule Tiles")]
    public RuleTile GrassTile;
    public RuleTile RoadTile;

    enum TileType : int
    {
        Grass = 0,
        Road = 1
    }

    private void Awake()
    {
        _TerrainTilemap = transform.Find("Terrain").GetComponent<Tilemap>();
        _BuildingsTilemap = transform.Find("Buildings").GetComponent<Tilemap>();
    }

    void Start()
    {
        _TileGrid = new int[LevelLength, LevelWidth];

        for (int i = 0; i < LevelLength; i++)
        {
            for (int j = 0; j < LevelWidth; j++)
            {
                if (j == 5)
                    _TileGrid[i,j] = (int)TileType.Road;
                else
                    _TileGrid[i,j] = (int)TileType.Grass;
            }
        }

        InstantiateTiles();
    }

    void Update()
    {
        
    }

    private void InstantiateTiles()
    {
        for (int i = 0; i < LevelLength; i++)
        {
            for (int j = 0; j < LevelWidth; j++)
            {
                switch(_TileGrid[i,j])
                {
                    case (int)TileType.Grass:
                        _TerrainTilemap.SetTile(new Vector3Int(i, j, 0), GrassTile);
                        break;
                    case (int)TileType.Road:
                        _TerrainTilemap.SetTile(new Vector3Int(i, j, 0), RoadTile);
                        break;
                }
            }
        }
    }
}
