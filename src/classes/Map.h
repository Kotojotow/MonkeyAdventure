#ifndef MAP_H
#define MAP_H
#include "genre/CgeneratorAtt.h"
#include "string"
#include <iostream>

class CModule {
public:
	CModule();
	void StartBlock();
	void NoobBlock();
	void BlueBlock(int);
	void GreenBlock(int);
	void RedBlock(int);
	void BronzeBlock(int);
	void ExitBlock(int);
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
#define NOOBBLOCK 1
#define BLUEBLOCK 8
#define GREENBLOCK 9
#define REDBLOCK 10
#define BRONZEBLOCK 30
#define EXITBLOCK 100
#endif // !GENERATOR_H