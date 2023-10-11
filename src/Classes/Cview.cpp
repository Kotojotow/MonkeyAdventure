#include <iostream>
#include <string>
#include "Cview.h"
#include "Cproperties.h"
#include "CgeneratorAtt.h"
#include "functions/melib.h"

using namespace std;
Cproperties index;
CgeneratorAtt att;

Cview::Cview() {
	screen = 1;
	MenuOptions = new string[MENUSIZE];
	exit = false;
}

int Cview::showScreen(int input1, int input2) {
	int buttonReturn = menuButtons(input1, input2);
	action(screen, buttonReturn);

	options(screen);
	showMenuScreen(index.actualMenuIndex(), MenuOptions, index.actualBorder());
	cout << endl<<input1 << endl << input2 << endl << screen << endl << index.actualMenuIndex() << endl << index.actualBorder();

	return exit;
}

void Cview::showMenuScreen(int menuIndex, string* opt, int optionsAmount) {
	cout << opt[0];
	for (int i = 1; i < optionsAmount; i++) {
		if (i == menuIndex)
			cout << "> ";
		cout << opt[i];
	}
}

void Cview::action(int scr, int act) {
	if (act == K_DOWN) {
		index.indexDown();
		return;
	}
	if (act == K_UP) {
		index.indexUp();
		return;
	}
	if (scr == MAINMENU) {/////////////////////
		if (act == K_ENTER){ 
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
		if (act == K_ENTER) {
			switch (index.actualMenuIndex()) {
			case 1:break;
			case 2:att.seedSet(); break;
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
			case 1: exit = true; break;
			case 2: screen = MAINMENU; index.indexReset(4, MAINMENUSIZE); break;
			}
		}
		if (act == K_ESC) {
			screen = MAINMENU; index.indexReset(1, MAINMENUSIZE);
		}
	}
}



void Cview::options(int scr) {
	
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
	case OPTIONSMENU:{
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

Cview::~Cview() {
	delete[] MenuOptions;
}