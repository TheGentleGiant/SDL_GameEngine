#include "SDL.h"
#include "Game.h"
Game* game = nullptr;
int main(int args, char* argv[])
{
	const int FPS = 60;
	const int framedelay = 1000 / FPS;
	Uint32 frameStart;
	int frameTime;
	
	game = new Game();
	game->init("Game Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 640, false);
	while (game->running())
	{
		frameStart = SDL_GetTicks();

		game->handleevents();
		game->update();
		game->render();
		
		frameTime = SDL_GetTicks() - frameStart;

		if (framedelay> frameTime)
		{
			SDL_Delay(framedelay - frameTime);
		}
	}
	return 0;
}
