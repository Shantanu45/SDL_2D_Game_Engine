#include <iostream>
#include "App/App.h"

static const int SCREEN_WIDTH = 224;
static const int SCREEN_HEIGHT = 288;
static const int MAGNIFICATION = 2;

int main(int argc, char** argv)
{
	if(App::Singleton().Init(SCREEN_WIDTH, SCREEN_HEIGHT, MAGNIFICATION))
	{
		App::Singleton().Run();
	}
	return EXIT_SUCCESS;
}

