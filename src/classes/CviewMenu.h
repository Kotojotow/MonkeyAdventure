#ifndef CVIEWMENU_H
#define CVIEWMENU_H

#include "genre/Cview.h"

class CviewMenu : public Cview{
public:
	CviewMenu(int x, int y) : Cview(x, y) {
		return;
	};
	void options(int) override;
	void action(int, int) override;
private:
	CgeneratorAtt att;
};

#endif