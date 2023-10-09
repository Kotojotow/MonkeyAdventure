#include <iostream>
#include <string>
#include "Cview.h"
#include "Cproperties.h"

#define MAINMENU 1
#define NEWGAMEMENU 10
#define LOADMENU 20
#define OPTIONSMENU 30
#define EXITMENU 40
using namespace std;
Cproperties index;

Cview::Cview() {
	screen = 1;
	MenuOptions = new string[4];
	exit = false;
}

bool Cview::showScreen(int input1, int input2) {
	int buttonReturn = menuButtons(input1, input2);
	action(screen, buttonReturn);

	options(screen);
	switch (screen) {
	case MAINMENU: { 
		cout << "Monkey Adventure!\n\n";
		showMenuScreen(index.actualMenuIndex(),MenuOptions, index.actualBorder());
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

void Cview::showMenuScreen(int menuIndex,string *opt,int optionsAmount) {
	for (int i = 0; i < optionsAmount; i++) {
		if (i == menuIndex)
			animate("> ");
		animate(opt[i]);
	}
}

int Cview::menuButtons(int input1, int input2) {
	if (input1 == 13) {//enter
		return 13;
	}
	if (input1 == 27) {//esc
		return 27;
	}
	if (input1 == 224) {
		if (input2 == 72 && index.actualMenuIndex() > 0) {
			index.indexDown();
			return 72;
		}
		if (input2 == 80 && index.actualMenuIndex() < index.actualBorder()-1) {
			index.indexUp();
			return 80;
		}
		if (input2 == 75 ) {
			return 75; //lewo
		}
		if (input2 == 77 ) {
			return 77;//prawo
		}
	}
	return 0;
}

void Cview::action(int scr, int act) {
	if (scr == MAINMENU) {//main menu
		if (act == 13){ 
			screen = 10 * (index.actualMenuIndex()+1);
			switch (index.actualMenuIndex()) {
			case 0:index.indexReset(0,2); break;
			case 1:index.indexReset(0,2); break;
			case 2:index.indexReset(0,2); break;
			case 3:index.indexReset(0,2); break;
			}
		}
		if (act == 2) {
			screen = EXITMENU;
			index.indexReset(0, 2);
		}
	}

	if (scr == EXITMENU) {//exit menu
		if (act == 13) {
			switch (index.actualMenuIndex())
			{
			case 0: exit = true; break;
			case 1: screen = MAINMENU; index.indexReset(3, 4); break;
			}
		}
	}
}

void Cview::animate(string sentence) {
	for (int i = 0; i < sentence.length(); i++) {
		cout << sentence[i];
		//Sleep(75);
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
	}
}

Cview::~Cview() {
	delete[] MenuOptions;
}