#ifndef CGENERATORATT_H
#define CGENERATORATT_H

class CgeneratorAtt
{
public:
	int seed;
	int difficulty;
	int size;

	CgeneratorAtt();
	int seedGenerator();
	void difficultyUP();
	void difficultyDOWN();
	void sizeUP();
	void sizeDOWN();
};

#endif