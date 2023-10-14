#ifndef CVIEWINGAME_H
#define CVIEWINGAME_H


#include "genre/Cview.h"

class CviewInGame : public Cview {
public:
	CviewInGame(int x, int y) : Cview(x, y) {
		return;
	};
	void options(int) override;
	void action(int, int) override;
};

#endif // !CVIEWINGAME_H