#include "melib.h"
#include <conio.h>
#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;

void animateString(string sentence) {
	for (int i = 0; i < sentence.length(); i++) {
		cout << sentence[i];
		Sleep(1);
	}
}

int dynamicInputINT(string syntax,string describe, int number, int max) {
	string input = to_string(number);
	int key = 0;
	while (1) {
		bool minus = false;
		if (input[0] == '-')
			minus = true;
		system("cls");
		cout << describe << endl << endl << syntax << ": " << input;
		key = _getch();
		if (key == '-' && input.length() == 0) {
			input.push_back(key);
		}
		if (key == K_BACKSPACE && input.length() > 0) {
			input.pop_back();
		}
		if (key >= 48 && key <= 57 && input.length() - minus <max) {
			input.push_back(key);
		}
		if (key == K_ENTER || key==K_ESC) {
			system("cls");
			return stoi(input);
		}
	}
}

int menuButtons(int input1, int input2) {
	if (input1 == K_ENTER) return K_ENTER;
	if (input1 == K_ESC) return K_ESC;
	if (input1 == K_SPACE) return K_SPACE;
	if (input1 == K_BACKSPACE) return K_BACKSPACE;
	if (input1 == K_ARROWS) {
		if (input2 == K_DOWN) {
			return K_DOWN;
		}
		if (input2 == K_UP) {
			return K_UP;
		}
		if (input2 == K_LEFT) {
			return K_LEFT;
		}
		if (input2 == K_RIGHT) {
			return K_RIGHT;
		}
	}
	return 0;
}