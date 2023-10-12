#include <windows.h>
#include <string>

#include "src/classes/CviewMenu.h"
#include "src/classes/CviewInGame.h"
#include "src/classes/genre/Cview.h"
int main(int argc, char* argv[]) {
	int mode = 1;
	while (mode) {
		if (mode == 1) {
			CviewMenu MainMenu(50,20);
			MainMenu.showScreen();
			mode = MainMenu.nextMode();
		}
		if (mode == 2) {
			//CviewInGame inGame;
		}
	}
	return 0;
}