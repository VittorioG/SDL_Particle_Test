//============================================================================
// Name        : SDL.cpp
// Author      : Vittorio Guerrera
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL.h>
using namespace std;


/*
 * Installing SDL :
 * 1. Copy 32 bit SDL folder to MinGW/include
 * 2. Copy SDL2.dll from SDL bin folder to MinGW/bin
 * 3. Use WinMain
 * 4. Import libraries/header files as shown in project settings
 */
int WinMain() {

	const int SCREEN_WIDTH = 800;
	const int SCREEN_HEIGHT = 600;

	if(SDL_Init(SDL_INIT_VIDEO) < 0){
		cout << "SDL Init Failed" << endl;
		return 1;
	}

	SDL_Window *window = SDL_CreateWindow("Particle Fire Explosion",
			SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	if(window == NULL){
		cout << "Could not create window." << SDL_GetError() << endl;
		SDL_Quit();
		return 2;
	}

	bool quit = false;

	SDL_Event event;

	while(!quit){
		// Update particles
		// Draw particles
		// Check for messages/events

		while(SDL_PollEvent(&event)){
			if(event.type == SDL_QUIT){
				quit = true;
			}
		}
	}

	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}
