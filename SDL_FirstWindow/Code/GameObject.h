#pragma once
#include "Game.h"
class GameObject
{
public:
	GameObject(const char* textureSheet, int xpos, int ypos);
	~GameObject();

	void Update();
	void Render();
	int xPos, yPos;

private:
	
	SDL_Texture * objectTexture;
	SDL_Rect sourceRect, destRect;
	
};

