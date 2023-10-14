#include "CviewMenu.h"
#include "functions/melib.h"
#include <iostream>

using namespace std;

void CviewMenu::options(int scr){
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
		MenuOptions[2] = "Seed: " + att.showSeed();
		MenuOptions[3] = "Difficulty: " + att.showDifficulty();
		MenuOptions[4] = "Size of world: " + att.showSize();
		MenuOptions[5] = "Ironman: " + att.showIronMan() + "\n";
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
void CviewMenu::action(int scr, int act) {
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
			case 1:index.indexReset(1, NEWGAMEMENUSIZE); break;
			case 2:index.indexReset(1, LOADMENUSIZE); break;
			case 3:index.indexReset(1, OPTIONSMENUSIZE); break;
			case 4:index.indexReset(1, EXITMENUSIZE); break;
			}
		}
		if (act == K_ESC) {
			screen = EXITMENU; index.indexReset(1, EXITMENUSIZE);
		}
	}
	if (scr == NEWGAMEMENU) {////////////////////
		if (index.actualMenuIndex() == 2) att.seedSet(act);
		if (act == K_ENTER) {
			switch (index.actualMenuIndex()) {
			case 1:break;
			case 2:att.seedGenerator(); break;
			case 3:att.difficultyUP(); break;
			case 4:att.sizeUP(); break;
			case 5:att.ironManchange(); break;
			case 6:screen = MAINMENU; index.indexReset(1, MAINMENUSIZE); break;
			}
		}
		if (act == K_LEFT) {
			switch (index.actualMenuIndex()) {
			case 3:att.difficultyDOWN(); break;
			case 4:att.sizeDOWN(); break;
			case 5:att.ironManchange(); break;
			}
		}
		if (act == K_RIGHT) {
			switch (index.actualMenuIndex()) {
			case 3:att.difficultyUP(); break;
			case 4:att.sizeUP(); break;
			case 5:att.ironManchange(); break;
			}
		}
		if (act == K_ESC) {
			screen = MAINMENU; index.indexReset(1, MAINMENUSIZE);
		}
	}

	if (scr == EXITMENU) {/////////////////////
		if (act == K_ENTER) {
			switch (index.actualMenuIndex()) {
			case 1: exit = 0; break;
			case 2: screen = MAINMENU; index.indexReset(4, MAINMENUSIZE); break;
			}
		}
		if (act == K_ESC) {
			screen = MAINMENU; index.indexReset(1, MAINMENUSIZE);
		}
	}
}