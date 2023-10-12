#include <random>
#include <iostream>
#include <string>
#include "CgeneratorAtt.h"
#include "../functions/melib.h"

using namespace std;

CgeneratorAtt::CgeneratorAtt() {
	seedGenerator();
	difficulty = 1;
	size = 0;
	ironMan = false;
}

string CgeneratorAtt::showSeed() {
	string convert = to_string(seed);
	return convert + "_\n";
}
string CgeneratorAtt::showDifficulty() {
	switch (difficulty) {
	case 0:return "< Easy >\n";
	case 1:return "< Medium >\n";
	case 2:return "< Hard >\n";
		default:return "Something Wrong\n";
	}
}
string CgeneratorAtt::showSize() {
	switch (size) {
	case 0:return "< Small >\n";
	case 1:return "< Normal >\n";
	case 2:return "< Large >\n";
	default:return "Something Wrong\n";
	}
}
string CgeneratorAtt::showIronMan() {
	switch (ironMan) {
	case false:return "< Let me save during game >\n";
	case true:return "< No saves >!\n";
	}
	return "error in CgeneratorAtt.cpp";
}

int  CgeneratorAtt::seedGenerator() {
	random_device rd;
	mt19937 generator(rd());
	uniform_int_distribution<int> distribution(MINSEED, MAXSEED);
	seed = distribution(generator);
	return distribution(generator);
}
void  CgeneratorAtt::seedSet(int input) {
	seed = dynamicInputINT( seed, input);
	if (seed < MINSEED)
		seed = MINSEED;
	if (seed > MAXSEED)
		seed = MAXSEED;
}
void CgeneratorAtt::difficultyUP() {
	if (difficulty == MAXDIFF)
		difficulty = 0;
	else
		difficulty++;
}
void CgeneratorAtt::difficultyDOWN() {
	if (difficulty == 0)
		difficulty = MAXDIFF;
	else
		difficulty--;
}
void CgeneratorAtt::sizeUP() {
	if (size == MAXSIZE)
		size = 0;
	else
		size++;
}
void CgeneratorAtt::sizeDOWN() {
	if (size == 0)
		size = MAXSIZE;
	else
		size--;
}
void CgeneratorAtt::ironManchange() {
	if (ironMan)
		ironMan = false;
	else ironMan = true;
}