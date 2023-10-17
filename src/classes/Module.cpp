#include "Map.h"

CModule::CModule() {
	type = -1;
	value = 0;
}

void CModule::StartBlock() {
	value = 0;
	type = STARTBLOCK;
}
void CModule::NoobBlock() {
	value = 2;
	type = NOOBBLOCK;
}
void CModule::BlueBlock(int size) {
	value = 11 + size * 4;
	type = BLUEBLOCK;
}
void CModule::GreenBlock(int size) {
	value = 15 + size*5;
	type = GREENBLOCK;
}
void CModule::RedBlock(int size) {
	value = 20 + size*10;
	type = REDBLOCK;
}
void CModule::BronzeBlock(int size) {
	value = 30 + size*15;
	type = BRONZEBLOCK;
}
void CModule::ExitBlock(int size){
	value = 50 + size*20;
	type = EXITBLOCK;
}

void CModule::show() {
	switch (type)
	{
	case STARTBLOCK: std::cout << "@"; break;
	case NOOBBLOCK:std::cout << "N"; break;
	case REDBLOCK:std::cout << "R"; break;
	case BRONZEBLOCK:std::cout << "B"; break;
	case EXITBLOCK: std::cout << "E"; break;
	default: std::cout << "."; break;
	}
}