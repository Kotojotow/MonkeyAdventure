#include "CviewInGame.h"
#include "functions/melib.h"
#include <iostream>

using namespace std;

void CviewInGame::options(int scr) {
	switch (scr)
	{
	case MAINMENU: {
		MenuOptions[0] = "Monkey Adventure!\n\n";
		MenuOptions[1] = "New Game\n";
		MenuOptions[2] = "Load Save\n";
		MenuOptions[3] = "Settings\n";
		MenuOptions[4] = "Quit\n";
		break;
	}
	case NEWGAMEMENU: {
		MenuOptions[0] = "Begin new game\n\n";
		MenuOptions[1] = "Start Game\n\n";
		MenuOptions[2] = "Seed: ";
		MenuOptions[3] = "Difficulty: ";
		MenuOptions[4] = "Size of world: ";
		MenuOptions[5] = "Ironman: ";
		MenuOptions[6] = "Back to menu\n";
		break;
	}
	case LOADMENU: {
		MenuOptions[0] = "Load Game\n\n";
		MenuOptions[1] = "";
		MenuOptions[2] = "";
		MenuOptions[3] = "";
		MenuOptions[4] = "";
		MenuOptions[5] = "";
		break;
	}
	case OPTIONSMENU: {
		MenuOptions[0] = "Options\n\n";
		MenuOptions[1] = "";
		MenuOptions[2] = "";
		MenuOptions[3] = "";
		MenuOptions[4] = "";
		MenuOptions[5] = "";
		break;
	}
	case EXITMENU: {
		MenuOptions[0] = "Do you really want exit game?\n\n";
		MenuOptions[1] = "Yes\n";
		MenuOptions[2] = "No\n";
		break;
	}
	}
}

void CviewInGame::action(int scr, int act) {
	/*
	if (act == K_DOWN) {
		index.indexDown();
		return;
	}
	if (act == K_UP) {
		index.indexUp();
		return;
	}
	if (scr == MAINMENU) {/////////////////////
		if (act == K_ENTER) {
			screen = 10 * index.actualMenuIndex();
			switch (index.actualMenuIndex()) {
			}
		}
		if (act == K_ESC) {
			screen = EXITMENU; index.indexReset(1, EXITMENUSIZE);
		}
	}
	if (scr == NEWGAMEMENU) {////////////////////
		if (act == K_ENTER) {
			switch (index.actualMenuIndex()) {
			}
		}
		if (act == K_LEFT) {
			switch (index.actualMenuIndex()) {
			}
		}
		if (act == K_RIGHT) {
			switch (index.actualMenuIndex()) {
			}
		}
		if (act == K_ESC) {
		}
	}

	if (scr == EXITMENU) {/////////////////////
		if (act == K_ENTER) {
			}
		if (act == K_ESC) {
		}
	}*/
}