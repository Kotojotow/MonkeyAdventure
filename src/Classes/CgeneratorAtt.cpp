#include <cstdlib>
#include <iostream>
#include <string>
#include "CgeneratorAtt.h"

#define MINSEED -2000000
#define MAXSEED (MINSEED * 2)
#define MAXDIFF 2
#define MAXSIZE 2

CgeneratorAtt::CgeneratorAtt() {
	seed = seedGenerator();
	difficulty = 1;
	size = 0;
}

std::string CgeneratorAtt::showSeed() {
	std::string convert = std::to_string(seed);
	return convert + "\n";
}
std::string CgeneratorAtt::showDifficulty() {
	switch (difficulty)
	{
		case 0:return "Easy\n";
		case 1:return "Medium\n";
		case 2:return "Hard\n";
		default:return "Something Wrong\n";
	}
}
std::string CgeneratorAtt::showSize() {
	switch (size)
	{
	case 0:return "Small\n";
	case 1:return "Normal\n";
	case 2:return "Large\n";
	default:return "Something Wrong\n";
	}
}

int  CgeneratorAtt::seedGenerator() {
	return (std::rand() % MAXSEED) - MINSEED;
}
void  CgeneratorAtt::seedSet() {
	int seedNumber;
	std::cout << "/n/nSeed: ";
	std::cin >> seedNumber;
	if (seedNumber > MINSEED && seedNumber < MAXSEED)
		seed = seedNumber;
}
void CgeneratorAtt::difficultyUP() {
	if (difficulty < MAXDIFF)
		difficulty++;
}
void CgeneratorAtt::difficultyDOWN() {
	if (difficulty > 0)
		difficulty--;
}
void CgeneratorAtt::sizeUP() {
	if (size < MAXSIZE)
		size++;
}
void CgeneratorAtt::sizeDOWN() {
	if (size > 0)
		size--;
}