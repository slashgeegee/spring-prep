//============================================================================
// Name        : AnimatingColors.cpp
// Author      : Kirby James
// Version     : 0.2.0
// Description : Simply Utilizing SDL in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL.h>
#include <math.h>
#include "Screen.h"
using namespace std;


int main() {

//	const int SCREEN_WIDTH = 800;
//	const int SCREEN_HEIGHT= 600;

	Screen screen;

	if (screen.init() == false) {
		cout << "Initializing SDL failed..." << endl;
	}

	while (true) {
//		Update particles
//		Draw Particles
		int elapsed = SDL_GetTicks();
		unsigned char green = (1 + sin(elapsed * 0.0001)) * 128;

		for(int y=0;y < Screen::SCREEN_HEIGHT; y++){
			for(int x=0; x < Screen::SCREEN_WIDTH; x++){
				screen.setPixel(x,y,0,green,0);
			}
		}

		//screen.setPixel(400, 300, 255, 255, 255);

		// Draw the screen
		screen.update();

//		Check for messages/events
		if(screen.processEvents() == false ){
			break;
		}
	}

	screen.close();

	return 0;
}
