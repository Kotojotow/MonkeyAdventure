#ifndef CGENERATORATT_H
#define CGENERATORATT_H

class CgeneratorAtt
{
public:
	int seed;
	int difficulty;
	int size;

	CgeneratorAtt();
	std::string showSeed();
	std::string showDifficulty();
	std::string showSize();	
	void seedSet();
	void difficultyUP();
	void difficultyDOWN();
	void sizeUP();
	void sizeDOWN();
	int seedGenerator();
};

#endif