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
	int s = att.size;
	if (seed == 0) seed = 1;
	int seedI = 17;
	grid[middle][middle].StartBlock();
	grid[middle][middle-1].NoobBlock();
	grid[middle][middle+1].NoobBlock();
	grid[middle-1][middle].NoobBlock();
	grid[middle+1][middle].NoobBlock();
	if (seed % 2 == 0) {
		seed += seedI;
		grid[0][seed % (att.size + 3) + 2].ExitBlock(s);
		seed += seedI;
		grid[size-1][seed % (att.size + 3) + 2].ExitBlock(s);
		seed += seedI;
		grid[seed % (att.size + 3) + 2][0].BronzeBlock(s);
		seed += seedI;
		grid[seed % (att.size + 3) + 2][size - 1].BronzeBlock(s);
	}
	else {
		seed += seedI;
		grid[seed % (att.size + 3) + 2][0].ExitBlock(s);
		seed += seedI;
		grid[seed % (att.size + 3) + 2][size - 1].ExitBlock(s);
		seed += seedI;
		grid[0][seed % (att.size + 3) + 2].BronzeBlock(s);
		seed += seedI;
		grid[size - 1][seed % (att.size + 3) + 2].BronzeBlock(s);
	}
	seed += seedI;
	
}

void Map::Show() {
	for (int a = 0; a < size; a++) {
		for (int b = 0; b < size; b++)
			grid[a][b].show();
		std::cout << std::endl;
	}
	std::cout << std::endl;
}