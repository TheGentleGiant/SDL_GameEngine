#pragma once
#ifndef Game_h
#define Game_h

#include "SDL.h"
#include <stdio.h>
#include <iostream>
#include "SDL_image.h"

class Game
{
public:
	Game();
	~Game();

	void init(const char * title, int ypos, int xpos, int width, int height, bool fullscreen);
	
	void handleevents();
	void update();
	void render();
	void clean();
	bool running() { return is_running; }

	static SDL_Renderer* renderer;

private:
	int count = 0; 
	bool is_running;
	SDL_Window* window;
};
#endif // !Game_h

