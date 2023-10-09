#ifndef CPROPERTIES_H
#define CPROPERTIES_H

class Cproperties {
public:
	Cproperties();
	int actualMenuIndex();
	int actualBorder();
	void indexReset(int,int);
	void indexUp();
	void indexDown();
private:
	int MenuIndex;
	int border;
};
#endif