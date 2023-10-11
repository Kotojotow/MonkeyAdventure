#ifndef MELIB_H
#define MELIB_H
#include <string>

#define K_ENTER 13
#define K_ESC 27
#define K_BACKSPACE 8
#define K_SPACE 32
#define K_ARROWS 224
#define K_UP 80
#define K_DOWN 72
#define K_LEFT 75
#define K_RIGHT 77
//LEVEL GENERATOR
#define MINSEED -2000000
#define MAXSEED (MINSEED * -2)
#define MAXDIFF 2
#define MAXSIZE 2
//MENU
#define MENUSIZE 10 //MAX MENU SIZE
#define MAINMENU 1 
#define MAINMENUSIZE 5
#define NEWGAMEMENU  10
#define NEWGAMEMENUSIZE 7
#define LOADMENU 20
#define LOADMENUSIZE 5
#define OPTIONSMENU 30
#define OPTIONSMENUSIZE 5
#define EXITMENU 40
#define EXITMENUSIZE 3

void animateString(std::string);
/**
 * Turn on dynamic type of number
 *
 * @param syntax Label.
 * @param describe for example (minimum value 20).
 * @param number Initial Value.
 * @param max Maximum number of digit to type
 * @return Return changed number.
 */
int dynamicInputINT(std::string syntax,std::string describe, int number, int max);
int menuButtons(int, int);
#endif // !MELIB_H