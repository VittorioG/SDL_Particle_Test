//============================================================================
// Name        : SDL.cpp
// Author      : Vittorio Guerrera
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL.h>
#include "Screen.h"
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



	Screen screen;
	if(!screen.init()){
		cout << "Error initializing SDL." << endl;
	}

	while (true) {
		// Update particles
		// Draw particles
		// Check for messages/events

		if(!screen.processEvents()){
			break;
		}

	}


	screen.close();

	return 0;
}
