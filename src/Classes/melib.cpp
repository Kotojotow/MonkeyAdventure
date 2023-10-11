#include "melib.h"
#include <Windows.h>
#include <iostream>
using namespace std;
void animateString(std::string sentence) {
	for (int i = 0; i < sentence.length(); i++) {
		cout << sentence[i];
		//Sleep(75);
	}
}