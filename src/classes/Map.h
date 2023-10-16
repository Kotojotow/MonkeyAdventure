#ifndef MAP_H
#define MAP_H
#include "genre/CgeneratorAtt.h"
#include "string"
#define STARTBLOCK 0
class CModule {
public:
	CModule();
	void insertValue(int v, int t);
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

class Map {
public:
	//Map(std::string);
	Map(CgeneratorAtt);
	int size;
	CModule grid[13][13];
	CgeneratorAtt att;
	void generate();

private:
	int middle;
};
#endif // !GENERATOR_H