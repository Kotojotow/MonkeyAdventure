#include "src/Cgame.h"
#include <iostream>

int main(void) {
	Cgame game(1000, 1000);
	while (!game.exit) {
		game.mainLoop();
	}
	return 0;
}