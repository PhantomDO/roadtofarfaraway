using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class LevelGeneration : MonoBehaviour
{
    int[,] _TileGrid;
    Tilemap _TerrainTilemap;

    [Header("Level Parameters")]
    public int LevelWidth = 10;
    public int LevelLength = 10;

    [Header("Rule Tiles")]
    public RuleTile GrassTile;
    public RuleTile RoadTile;
    
    [Header("Buildings Prefabs")]
    public GameObject Tower;

    enum TileType : int
    {
        Grass = 0,
        Road = 1,
        Fort = 2
    }

    private void Awake()
    {
        _TerrainTilemap = transform.Find("Terrain").GetComponent<Tilemap>();
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
                else if (j == 4 && i % 2 == 0)
                    _TileGrid[i,j] = (int)TileType.Fort;
                else
                    _TileGrid[i,j] = (int)TileType.Grass;
            }
        }

        InstantiateLevel();
    }

    void Update()
    {
        
    }

    private void InstantiateLevel()
    {
        for (int i = 0; i < LevelLength; i++)
        {
            for (int j = 0; j < LevelWidth; j++)
            {
                switch(_TileGrid[i,j])
                {
                    case (int)TileType.Road:
                        _TerrainTilemap.SetTile(new Vector3Int(i, j, 0), RoadTile);
                        break;
                    case (int)TileType.Fort:
                        Instantiate(Tower, new Vector3(i + 0.5f, 0f, j + 0.5f), transform.rotation);
                        break;
                    default:
                        _TerrainTilemap.SetTile(new Vector3Int(i, j, 0), GrassTile);
                        break;
                }
            }
        }
    }
}
