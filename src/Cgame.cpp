#include <windows.h>
#include <conio.h>

#include "Cgame.h"

#include "Classes/Cview.h"


Cview screen;

Cgame::Cgame(int width, int height) {
	cmdAdjust(width, height);
	input1 = 0;
	input2 = 0;
	mainLoop();
}

void Cgame::mainLoop() {
	while (1) {
		system("cls");
		if (screen.showScreen(input1, input2)) break;
		getInput();
	}
}

void Cgame::getInput() {
	input1 = _getch();
	if (input1 == 224)
		input2 = _getch();
}
void Cgame::cmdAdjust(int width,int height) {
	system("mode con: cols=50 lines=20");
	//HWND console = GetConsoleWindow();
	//RECT rect;
	///GetWindowRect(console, &rect);

	//MoveWindow(console, rect.left, rect.top, width, height, TRUE);
}