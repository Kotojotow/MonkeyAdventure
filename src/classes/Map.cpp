#include "Map.h"
using namespace std;
Map::Map(CgeneratorAtt a) {
	att = a;
	size = (a.size * 2) + 7;
	middle = size / 2;
	generate();
}

void Map::generate() {
	int seed = att.seed;
	if (seed == 0) seed = 1;
	int seedI = 17;
	grid[middle][middle].insertValue(STARTBLOCK, STARTBLOCK);
	if (seed % 2 == 0) {
		seed += seedI;
		grid[0][seed % (att.size + 3) + 2].insertValue(EXITBLOCKVALUE, EXITBLOCK);
		seed += seedI;
		grid[size-1][seed % (att.size + 3) + 2].insertValue(EXITBLOCKVALUE, EXITBLOCK);
	}

}

void Map::Show() {
	for (int a = 0; a < size; a++) {
		for (int b = 0; b < size; b++)
			grid[a][b].show();
		std::cout << std::endl;
	}
	std::cout << std::endl;
}