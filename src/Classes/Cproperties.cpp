#include "Cproperties.h"

Cproperties::Cproperties() {
	Screen = 0;
	MenuIndex = 0;
}

int Cproperties::actualScreen() {
	return Screen;
}

void Cproperties::changeScreen(int newScreen) {
	Screen = newScreen;
}
int Cproperties::actualMenuIndex() {
	return MenuIndex;
}

void Cproperties::indexReset() {
	MenuIndex = 0;
}
void Cproperties::indexUp() {
	MenuIndex++;
}
void Cproperties::indexDown() {
	MenuIndex--;
}