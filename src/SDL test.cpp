//============================================================================
// Name        : SDL.cpp
// Author      : Vittorio Guerrera
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "Screen.h"
#include "Particle.h"
#include "Swarm.h"

using namespace std;
using namespace sdltest;

/*
 * Installing SDL :
 * 1. Copy 32 bit SDL folder to MinGW/include
 * 2. Copy SDL2.dll from SDL bin folder to MinGW/bin
 * 3. Use WinMain
 * 4. Import libraries/header files as shown in project settings
 */
int WinMain() {

	srand(time(NULL));

	Screen screen;
	if (!screen.init()) {
		cout << "Error initializing SDL." << endl;
	}

	Swarm swarm;

	int max = 0;

	while (true) {
		// Update particles

		// Draw particles
		 int elapsed = SDL_GetTicks();


		 unsigned char red = (unsigned char) ((1 + sin(elapsed * 0.001)) * 128);
		 unsigned char green = (unsigned char) ((1 + sin(elapsed * 0.002)) * 128);
		 unsigned char blue = (unsigned char) ((1 + sin(elapsed * 0.003)) * 128);


		const Particle * const pParticles = swarm.getParticles();
		for (int i = 0; i < Swarm::NPARTICLES; i++) {
			Particle particle = pParticles[i];

			int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH / 2;
			int y = (particle.m_y + 1) * Screen::SCREEN_HEIGHT / 2;

			screen.setPixel(x, y, red, green, blue);
		}


		//Draw the screen
		screen.update();

		// Check for messages/events
		if (!screen.processEvents()) {
			break;
		}

	}

	cout << "Max: " << max << endl;

	screen.close();

	return 0;
}
