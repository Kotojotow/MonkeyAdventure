#ifndef CGENERATORATT_H
#define CGENERATORATT_H

class CgeneratorAtt
{
public:
	int seed;
	int difficulty;
	int size;
	bool ironMan;

	CgeneratorAtt();
	std::string showSeed();
	std::string showDifficulty();
	std::string showSize();
	std::string showIronMan();
	void seedSet();
	void ironManchange();
	void difficultyUP();
	void difficultyDOWN();
	void sizeUP();
	void sizeDOWN();
	int seedGenerator();
};

#endif