#include "Map.h"

CModule::CModule(int Value, int Type) {
	type = Type;
	value = Value;
}

int CModule::valueOf() { return value; }
int CModule::typeOf() { return type; }