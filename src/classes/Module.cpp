#include "Map.h"

CModule::CModule() {
	type = -1;
	value = 0;
}

void CModule::insertValue(int v, int t) {
	value = v;
	type = t;
}

void CModule::show() {
	switch (type)
	{
	case STARTBLOCK: std::cout << "@"; break;
	case EXITBLOCK: std::cout << "E"; break;
	default: std::cout << "."; break;
	}
}