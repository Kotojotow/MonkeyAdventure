#ifndef MAP_H
#define MAP_H
#include "genre/CgeneratorAtt.h"
#include "string"
#include <iostream>

class CModule {
public:
	CModule();
	void insertValue(int v, int t);
	void show();
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
	void Show();
private:
	int middle;
};

#define STARTBLOCK 0
#define EXITBLOCK 100
#define EXITBLOCKVALUE 50
#endif // !GENERATOR_H