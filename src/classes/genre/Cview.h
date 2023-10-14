#ifndef CVIEW_H
#define CVIEW_H
#include <string>
#include "Cproperties.h"
#include "CgeneratorAtt.h"

class Cview
{
public:
	Cview(int,int);
	void showScreen();
	int nextMode();
	virtual void options(int scr) = 0;
protected:
	Cproperties index;
	int screen;
	int exit;
	std::string *MenuOptions;

	void showMenuScreen(int,std::string*,int);
	virtual void action(int, int) = 0;
};

#endif // !CVIEW_H