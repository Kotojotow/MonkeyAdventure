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
	if(MenuIndex < border - 1)
		MenuIndex++;
}
void Cproperties::indexDown() {
	if(MenuIndex > 0)
		MenuIndex--;
}