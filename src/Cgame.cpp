#include <windows.h>
#include <iostream>
#include <conio.h>

#include "Cgame.h"
#include "Functions/views.h"
#include "objects.h"

using namespace std;

Cgame::Cgame(int width, int height) {
	cmdAdjust(width, height);
}

void Cgame::mainLoop() {
	//showScreen();
	input = _getch();
	cout << input << endl;
	if (input == 27) exitGame();
}


void Cgame::showScreen() {
	switch (prop.actualScreen()) {
	case 0: showMainMenuScreen(prop.actualMenuIndex()); break;
	default:cout << "Blad\n";
	}
}

void Cgame::cmdAdjust(int width,int height) {
	HWND console = GetConsoleWindow();
	RECT rect;
	GetWindowRect(console, &rect);

	MoveWindow(console, rect.left, rect.top, width, height, TRUE);
}
void Cgame::exitGame() {
	exit = 1;
}