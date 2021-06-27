#include <iostream>
#include <SDL/SDL.h>

#include "Graphics/Color.h"
#include "Graphics/Screen.h"
#include "Shapes/Line2D.h"
#include "Shapes/Triangle.h"
#include "Shapes/AARectangle.h"
#include "Shapes/Circle.h"

static const int SCREEN_WIDTH = 224;
static const int SCREEN_HEIGHT = 288;
static const int MAGNIFICATION = 2;

int main(int argc, char** argv)
{
	Screen theScreen;

	theScreen.Init(SCREEN_WIDTH, SCREEN_HEIGHT, MAGNIFICATION);

	Line2D line = { Vec2D(0, 0), Vec2D(SCREEN_WIDTH, SCREEN_HEIGHT) };
	Triangle triangle = { Vec2D(60, 10), Vec2D(10, 110), Vec2D(110, 110) };
	AARectangle rect = { Vec2D(SCREEN_WIDTH / 2 - 25, SCREEN_HEIGHT / 2 - 25), 50, 50};
	Circle circle = { Vec2D(SCREEN_WIDTH / 2 + 50, SCREEN_HEIGHT / 2 + 50), 50 };
	
	theScreen.Draw(triangle, Color::Red(), true, Color::Red());
	theScreen.Draw(rect, Color::Green(), true, Color::Green());
	theScreen.Draw(circle, Color::Pink(), true, Color::Pink());
	//theScreen.Draw(line, Color::White());	
	//theScreen.Draw(SCREEN_WIDTH/2, SCREEN_HEIGHT/2, Color::Yellow());
	theScreen.SwapScreens();

	SDL_Event sdlEvent;
	bool running = true;


	while(running)
	{
		while(SDL_PollEvent(&sdlEvent))
		{
			switch (sdlEvent.type)
			{
			case SDL_QUIT:
				running = false;
				break;
			}
		}
	}


	return EXIT_SUCCESS;
}

