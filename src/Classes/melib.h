#ifndef MELIB_H
#define MELIB_H
#include <string>
#define K_ENTER 13
#define K_ESC 27
#define K_ARROWS 224
#define K_UP 80
#define K_DOWN 72
#define K_LEFT 75
#define K_RIGHT 77
//LEVEL GENERATOR
const int MINSEED = -2000000;
const int MAXSEED = MINSEED * -2;
const short int MAXDIFF = 2;
const short int MAXSIZE = 2;
	  
const short int MENUSIZE = 5; //MAX MENU SIZE
const short int MAINMENU = 1;
const short int MAINMENUSIZE = 4;
const short int NEWGAMEMENU = 10;
const short int NEWGAMEMENUSIZE = 5;
const short int LOADMENU = 20;
const short int LOADMENUSIZE = 4;
const short int OPTIONSMENU = 30;
const short int OPTIONSMENUSIZE = 4;
const short int EXITMENU = 40;
const short int EXITMENUSIZE = 2;

void animateString(std::string);
#endif // !MELIB_H
