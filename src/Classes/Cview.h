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
	bool exit;
	std::string *MenuOptions;

	void showMenuScreen(int,std::string*,int);
	int menuButtons(int,int);
	void action(int, int);
	void animate(std::string);
	void options(int);
};

#endif // !CVIEW_H