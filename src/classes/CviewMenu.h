#pragma once
#include "genre/Cview.h"

class CviewMenu : public Cview{
public:
	CviewMenu(int x, int y) : Cview(x, y) {
		return;
	};
	void options(int) override;
};

