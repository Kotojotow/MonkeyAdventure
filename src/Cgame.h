#ifndef CGAME_H
#define CGAME_H

class Cgame
{
public:
	bool exit = 0;

	Cgame(int,int);
	void mainLoop();
private:
	int input;

	void showScreen();
	void cmdAdjust(int, int);
	void exitGame();
};

#endif