#ifndef CPROPERTIES_H
#define CPROPERTIES_H

class Cproperties {
public:
	Cproperties();
	int actualScreen();
	int actualMenuIndex();
	void changeScreen(int);
	void indexReset();
	void indexUp();
	void indexDown();
private:
	int Screen;
	int MenuIndex;
};
#endif