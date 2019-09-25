#include "GameObject.h"
#include "TextureManager.h"


GameObject::GameObject(const char* textureSheet, int xpos, int ypos)
{
	objectTexture = TextureManager::LoadTexture(textureSheet);
	xPos = xpos;
	yPos = ypos;
}

GameObject::~GameObject()
{
}

void GameObject::Update()
{
	xPos++;
	yPos++;

	sourceRect.h = 32;
	sourceRect.w = 32;
	sourceRect.x = 0;
	sourceRect.y = 0;

	destRect.x = xPos;
	destRect.y = yPos;

	destRect.w = sourceRect.w * 2;
	destRect.h = sourceRect.h * 2;

}

void GameObject::Render()
{
	SDL_RenderCopy(Game::renderer, objectTexture, &sourceRect, &destRect);
}
