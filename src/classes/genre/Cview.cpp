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

void Cview::showScreen() {
	int buttonReturn = 0;
	while (exit == 1) {
		options(screen);
		showMenuScreen(index.actualMenuIndex(), MenuOptions, index.actualBorder());
		cout << endl << buttonReturn << endl << screen << endl << index.actualMenuIndex() << endl << index.actualBorder();
		buttonReturn = keyInput();
		action(screen, buttonReturn);
		system("cls");
	}
}

void Cview::showMenuScreen(int menuIndex, string* opt, int optionsAmount) {
	cout << opt[0];
	for (int i = 1; i < optionsAmount; i++) {
		if (i == menuIndex)
			cout << "> ";
		cout << opt[i];
	}
}

int Cview::nextMode() {
	return exit;
}