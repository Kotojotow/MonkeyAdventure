#include "Cproperties.h"

Cproperties::Cproperties() {
	indexReset(1,5);
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
	if (MenuIndex == border)
		MenuIndex = 1;
}
void Cproperties::indexDown() {
	MenuIndex--;
	if (MenuIndex == 0)
		MenuIndex = border - 1;
}