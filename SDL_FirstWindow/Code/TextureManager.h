#pragma once

#include "Game.h"

class TextureManager
{
public:
	static SDL_Texture * LoadTexture(const char* path);
	static void Draw(SDL_Texture* tex, SDL_Rect source, SDL_Rect dest);
protected:
private:
};

