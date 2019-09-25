#pragma once
#include "Cell.h"
#include "SDL_render.h"

class Grid {
public:
	Cell cells[9];
	SDL_Texture* CellTexture;
	void DrawGrid(Cell cellArray[],SDL_Texture * texture);
	Cell SetCell(Cell cellToSet);
private:

};