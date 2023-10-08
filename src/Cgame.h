#ifndef CGAME_H
#define CGAME_H

class Cgame
{
public:

	Cgame(int,int);
	void mainLoop();
private:
	int input1;
	int input2;

	void getInput();
	void cmdAdjust(int, int);
};

#endif