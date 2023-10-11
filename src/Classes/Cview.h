#ifndef CVIEW_H
#define CVIEW_H
#include <string>

class Cview
{
public:
	Cview();
	~Cview();
	int showScreen(int, int);
private:
	int screen;
	bool exit;
	std::string *MenuOptions;

	void showMenuScreen(int,std::string*,int);
	void action(int, int);
	void options(int);
};

#endif // !CVIEW_H