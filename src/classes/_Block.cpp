#include <iostream>
#include "Map.h"

CBlock::CBlock(char initial) {
	setCharacter(initial);
}
void CBlock::setCharacter(char a) {
	character = a;
}
void CBlock::showBlock() {
	std::cout << character;
}
char CBlock::checkCharacter() {
	return character;
}