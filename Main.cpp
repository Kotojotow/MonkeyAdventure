#include "src/Cgame.h"
#include <iostream>


int main(int argc, char* argv[]) {
	srand(time(NULL));
	Cgame game(1000, 1000);
	game.mainLoop();
	return 0;
}