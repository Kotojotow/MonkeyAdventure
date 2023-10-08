#ifndef CVIEW_H
#define CVIEW_H
#include <string>

class Cview
{
public:
	Cview();
	~Cview();
	bool showScreen(int, int);
private:
	int screen;
	std::string *MenuOptions;

	void showMenuScreen(int,std::string*,int);
	void animate(std::string);
	int menuButtons(int,int);
	void options(int);
};

#endif // !CVIEW_H