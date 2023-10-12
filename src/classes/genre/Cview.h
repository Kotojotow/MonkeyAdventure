#ifndef CVIEW_H
#define CVIEW_H
#include <string>
#include "Cproperties.h"
#include "CgeneratorAtt.h"

class Cview
{
public:
	Cview(int,int);
	virtual int showScreen();
	int nextMode();
	virtual void options(int scr) = 0;
protected:
	Cproperties index;
	CgeneratorAtt att;

	int screen;
	int exit;
	std::string *MenuOptions;

	void showMenuScreen(int,std::string*,int);
	void action(int, int);
	~Cview();
};

#endif // !CVIEW_H