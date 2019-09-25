#include "TextureManager.h"

SDL_Texture * TextureManager::LoadTexture(const char* path)
{
	SDL_Surface* tempSurface = IMG_Load(path);
	SDL_Texture * texture = SDL_CreateTextureFromSurface(Game::renderer, tempSurface);
	SDL_FreeSurface(tempSurface);
	return texture;
}

void TextureManager::Draw(SDL_Texture* tex, SDL_Rect source, SDL_Rect dest)
{
	SDL_RenderCopy(Game::renderer, tex, &source, &dest);
}
