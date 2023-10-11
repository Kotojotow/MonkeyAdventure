#include <random>
#include <iostream>
#include <string>
#include "CgeneratorAtt.h"
#include "melib.h"

using namespace std;

CgeneratorAtt::CgeneratorAtt() {
	seed = seedGenerator();
	difficulty = 1;
	size = 0;
}

string CgeneratorAtt::showSeed() {
	string convert = to_string(seed);
	return convert + "\n";
}
string CgeneratorAtt::showDifficulty() {
	switch (difficulty)
	{
		case 0:return "Easy\n";
		case 1:return "Medium\n";
		case 2:return "Hard\n";
		default:return "Something Wrong\n";
	}
}
string CgeneratorAtt::showSize() {
	switch (size)
	{
	case 0:return "Small\n";
	case 1:return "Normal\n";
	case 2:return "Large\n";
	default:return "Something Wrong\n";
	}
}

int  CgeneratorAtt::seedGenerator() {
	random_device rd;
	mt19937 generator(rd());
	uniform_int_distribution<int> distribution(MINSEED, MAXSEED);
	return distribution(generator);
}
void  CgeneratorAtt::seedSet() {
	int seedNumber;
	cout << "/n/nSeed: ";
	do {
		break;
	} while (1);
	cin >> seedNumber;
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