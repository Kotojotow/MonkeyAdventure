#include <windows.h>
#include <string>

#include "src/classes/CviewMenu.h"
#include "src/classes/CviewInGame.h"
#include "src/classes/genre/CgeneratorAtt.h"
#include "src/classes/Map.h"
int main(int argc, char* argv[]) {
	int mode = 3;
	while (mode) {
		if (mode == 1) {
			CviewMenu MainMenu(50, 20);
			MainMenu.showScreen();
			mode = MainMenu.nextMode();
		}
		if (mode == 2) {
			//CviewInGame inGame;
		}
		if (mode == 3) {
			for (int i = 0; i < 20; i++) {
				CgeneratorAtt att;
				att.seed = i;
				Map mapa(att);
				std::cout << att.seed << std::endl << std::endl;
				mapa.Show();
			}
			return 0;
		}
	}
	return 0;
}