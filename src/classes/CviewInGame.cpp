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