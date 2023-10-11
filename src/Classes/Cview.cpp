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

bool Cview::showScreen(int input1, int input2) {
	int buttonReturn = menuButtons(input1, input2);
	action(screen, buttonReturn);

	options(screen);
	switch (screen) {
	case MAINMENU: { 
		cout << "Monkey Adventure!\n\n";
		showMenuScreen(index.actualMenuIndex(), MenuOptions, index.actualBorder());
		break;
	}
	case NEWGAMEMENU: {
		cout << "Begin new game\n\n";
		showMenuScreen(index.actualMenuIndex(), MenuOptions, index.actualBorder());
		break;
	}
	case EXITMENU: {
		cout << "Do you really want exit game?\n\n";
		showMenuScreen(index.actualMenuIndex(), MenuOptions, index.actualBorder());
		break;
	}
	}
	cout << endl<<input1 << endl << input2 << endl << screen << endl << index.actualMenuIndex() << endl << index.actualBorder();

	return exit;
}

int Cview::menuButtons(int input1, int input2) {
	if (input1 == K_ENTER) {
		return 13;
	}
	if (input1 == K_ESC) {
		return 27;
	}
	if (input1 == K_ARROWS) {
		if (input2 == K_DOWN ) {
			index.indexDown();
			return 72;
		}
		if (input2 == K_UP ) {
			index.indexUp();
			return 80;
		}
		if (input2 == K_LEFT ) {
			return 75; 
		}
		if (input2 == K_RIGHT ) {
			return 77;
		}
	}
	return 0;
}

void Cview::action(int scr, int act) {
	if (scr == MAINMENU) {
		if (act == K_ENTER){ 
			screen = 10 * (index.actualMenuIndex()+1);
			switch (index.actualMenuIndex()) {
			case 0:index.indexReset(0, NEWGAMEMENUSIZE); break;
			case 1:index.indexReset(0, 2); break;
			case 2:index.indexReset(0,2); break;
			case 3:index.indexReset(0, EXITMENUSIZE); break;
			}
		}
		if (act == K_ESC) {
			screen = EXITMENU; index.indexReset(0, EXITMENUSIZE);
		}
	}
	if (scr == NEWGAMEMENU) {
		if (act == K_ENTER) {
			switch (index.actualMenuIndex()) {
			case 0:break;
			case 1:att.seedSet(); break;
			case 2:att.difficultyUP(); break;
			case 3:att.sizeUP(); break;
			case 4:att.ironManchange(); break;
			case 5:screen = MAINMENU; index.indexReset(0, MAINMENUSIZE); break;
			}
		}
		if (act == K_LEFT) {
			switch (index.actualMenuIndex()) {
			case 2:att.difficultyDOWN(); break;
			case 3:att.sizeDOWN(); break;
			case 4:att.ironManchange(); break;
			}
		}
		if (act == K_RIGHT) {
			switch (index.actualMenuIndex()) {
			case 2:att.difficultyUP(); break;
			case 3:att.sizeUP(); break;
			case 4:att.ironManchange(); break;
			}
		}
		if (act == K_ESC) {
			screen = MAINMENU; index.indexReset(0, MAINMENUSIZE);
		}
	}

	if (scr == EXITMENU) {//exit menu
		if (act == K_ENTER) {
			switch (index.actualMenuIndex()) {
			case 0: exit = true; break;
			case 1: screen = MAINMENU; index.indexReset(3, MAINMENUSIZE); break;
			}
		}
		if (act == K_ESC) {
			screen = MAINMENU; index.indexReset(3, MAINMENUSIZE);
		}
	}
}

void Cview::showMenuScreen(int menuIndex, string* opt, int optionsAmount) {
	for (int i = 0; i < optionsAmount; i++) {
		if (i == menuIndex)
			cout<<"> ";
		cout<<opt[i];
	}
}

void Cview::options(int scr) {
	
	switch (scr)
	{
	case MAINMENU: {
		MenuOptions[0] = "New Game\n";
		MenuOptions[1] = "Load Save\n";
		MenuOptions[2] = "Settings\n";
		MenuOptions[3] = "Quit\n";
		break;
	}  
	case EXITMENU: {
		MenuOptions[0] = "Yes\n";
		MenuOptions[1] = "No\n";
		break;
	}
	case NEWGAMEMENU: {
		MenuOptions[0] = "Start Game\n\n";
		MenuOptions[1] = "Seed: " + att.showSeed();
		MenuOptions[2] = "Difficulty: " + att.showDifficulty();
		MenuOptions[3] = "Size of world: " + att.showSize();
		MenuOptions[4] = "Ironman: " + att.showIronMan() + "\n";
		MenuOptions[5] = "Back to menu\n";
		break;
	}
	}
}

Cview::~Cview() {
	delete[] MenuOptions;
}