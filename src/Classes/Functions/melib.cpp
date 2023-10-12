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

int dynamicInputINT( int number, int key) {
	string input = to_string(number);
	if (key == 45) {
		return stoi(input) * -1;
	}
	if (key == K_BACKSPACE && input.length() > 0) {
		input.pop_back();
		if(input[0] == '-' && input.length() == 1)
			input.pop_back();
	}
	if (key >= 48 && key <= 57) {
		input.push_back(key);
	}
	if (input.length() == 0)
		return 0;
	else
		return stoi(input);
}

int keyInput() {
	int input1 = _getch();
	int input2;
	if (input1 == 224)
		input2 = _getch();
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
	return input1;
}
void cmdAdjust(int width, int height) {
	string command = "mode con: cols=" + to_string(width) + " lines=" + to_string(height);
	const char* cstr = command.c_str();
	system(cstr);
}