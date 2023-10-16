#include "Map.h"

Map::Map(CgeneratorAtt a) {
	a = att;
	size = (a.size * 2) + 7;
	middle = size / 2;
	generate();
}

void Map::generate() {
	grid[middle][middle].insertValue(STARTBLOCK, STARTBLOCK);

}