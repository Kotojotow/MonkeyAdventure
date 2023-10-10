#include <iostream>
#include <ctime>
#include "src/Cgame.h"
#include <cstdlib>

int main(int argc, char* argv[]) {
	Cgame game(1000, 1000);
	game.mainLoop();
	return 0;
}