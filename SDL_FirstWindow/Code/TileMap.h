#pragma once
#include "Game.h"

class TileMap
{
public:
	TileMap();
	~TileMap();

	void LoadMap(int arr[20][25]);
	void DrawMap();

private:
	SDL_Rect source, dest;

	SDL_Texture* dirt;
	SDL_Texture* grass;
	SDL_Texture* water;

	int map[20][25];
};

