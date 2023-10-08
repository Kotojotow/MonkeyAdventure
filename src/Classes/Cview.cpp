#include <iostream>
#include <string>
#include "Cview.h"
#include "Cproperties.h"

using namespace std;
Cproperties index;

Cview::Cview() {
	screen = 0;
	MenuOptions = new string[4];
}

bool Cview::showScreen(int input1, int input2) {
	int buttonReturn = menuButtons(input1, input2);;
	options(screen);

	switch (screen) {
	case 0: { // main menu
		cout << "Monkey Adventure!\n\n";
		showMenuScreen(index.actualMenuIndex(),MenuOptions, index.actualBorder());
		break;
	}
	case 4: {
		cout << "Do you really want exit game?\n\n";
		showMenuScreen(index.actualMenuIndex(), MenuOptions, index.actualBorder());
	}
	}
	cout << input1 << endl << input2 << endl;
	if (buttonReturn == 2)
		return false;
	return true;
}

void Cview::showMenuScreen(int menuIndex,string *opt,int optionsAmount) {
	for (int i = 0; i < optionsAmount; i++) {
		if (i == menuIndex)
			animate("> ");
		animate(opt[i]);
		
	}
}

int Cview::menuButtons(int input1, int input2) {
	if (input1 == 13) {
		return 1;
	}
	if (input1 == 27) {
		return 2;
	}
	if (input1 == 224) {
		if (input2 == 72 && index.actualMenuIndex() > 0) {
			index.indexDown();
		}
		if (input2 == 80 && index.actualMenuIndex() < index.actualBorder()-1) {
			index.indexUp();
		}
	}
	return 0;
}
// 13 enter 223 72 75 77 78 strza³ki

void Cview::animate(string sentence) {
	for (int i = 0; i < sentence.length(); i++) {
		cout << sentence[i];
		//Sleep(75);
	}
}

void Cview::options(int scr) {
	
	switch (scr)
	{
	case 0: {
		MenuOptions[0] = "New Game\n";
		MenuOptions[1] = "Load Save\n";
		MenuOptions[2] = "Settings\n";
		MenuOptions[3] = "Quit\n";
		break;
	}  
	case 4: {
		MenuOptions[0] = "Yes\n";
		MenuOptions[1] = "No\n";
		break;
	}
	}
}

Cview::~Cview() {
	delete[] MenuOptions;
}