#include "Cproperties.h"

Cproperties::Cproperties() {
	indexReset(4);
}

int Cproperties::actualMenuIndex() {
	return MenuIndex;
}
int Cproperties::actualBorder() {
	return border;
}

void Cproperties::indexReset(int bord) {
	MenuIndex = 0;
	border = bord;
}
void Cproperties::indexUp() {
	MenuIndex++;
}
void Cproperties::indexDown() {
	MenuIndex--;
}