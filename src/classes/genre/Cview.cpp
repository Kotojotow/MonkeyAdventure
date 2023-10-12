#include <iostream>
#include <string>
#include "Cview.h"
#include "Cproperties.h"
#include "CgeneratorAtt.h"
#include "../functions/melib.h"

using namespace std;


Cview::Cview(int width,int height) {
	cmdAdjust(width, height);
	screen = 1;
	MenuOptions = new string[MENUSIZE];
	exit = true;
}

int Cview::showScreen() {
	int buttonReturn = 0;
	while (exit == 1) {
		options(screen);
		showMenuScreen(index.actualMenuIndex(), MenuOptions, index.actualBorder());
		cout << endl << buttonReturn << endl << screen << endl << index.actualMenuIndex() << endl << index.actualBorder();
		buttonReturn = keyInput();
		action(screen, buttonReturn);
		system("cls");
	}
	return 0;
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
		if(index.actualMenuIndex() == 2) att.seedSet(act);
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

int Cview::nextMode() {
	return exit;
}

Cview::~Cview() {
	delete MenuOptions;
}