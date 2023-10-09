#include "Cproperties.h"

Cproperties::Cproperties() {
	indexReset(0,4);
}

int Cproperties::actualMenuIndex() {
	return MenuIndex;
}
int Cproperties::actualBorder() {
	return border;
}

void Cproperties::indexReset(int index,int bord) {
	MenuIndex = index;
	border = bord;
}
void Cproperties::indexUp() {
	MenuIndex++;
}
void Cproperties::indexDown() {
	MenuIndex--;
}