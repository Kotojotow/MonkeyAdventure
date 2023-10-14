#ifndef MAP_H
#define MAP_H
#include "genre/CgeneratorAtt.h"

class Map {
public:
	Map(CgeneratorAtt);
private:
	CgeneratorAtt gAtt;
	CModule grid[7][7];

	void generate();
};

class CModule {
public:
	CModule(int,int);
	int typeOf();
	int valueOf();
private:
	int value;
	int type;
};

class CBlock {
public:
	CBlock(char);
	void setCharacter(char);
	void showBlock();
	char checkCharacter();
private:
	char character;
};
#endif // !GENERATOR_H