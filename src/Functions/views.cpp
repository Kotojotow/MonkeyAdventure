#include <windows.h>
#include <iostream>
#include <string.h>
#include "views.h"
using namespace std;

void showMainMenuScreen(int menuIndex) {
	const short int optionsAmount = 5;
	string options[] = { "New Game\n","Load Save\n","Settings\n","Quit\n","Error\n" };
	for (int i = 0; i < optionsAmount; i++) {
		if (i == menuIndex)
			animate("> ");
		else
			cout << "  ";
		animate(options[i]);
	}
}

void animate(std::string sentence) {
	for (int i = 0; i < sentence.length(); i++) {
		cout << sentence[i];
		Sleep(75);
	}
}