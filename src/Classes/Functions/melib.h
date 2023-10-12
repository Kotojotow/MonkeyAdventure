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
#define MAXSEED (MINSEED * -1)
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
/**
 * Show off animate string on screen
 * @param animate String wnich you want animate.
 */
void animateString(std::string animate);
/**
 * Turn on dynamic type of number
 *
 * @param number Initial Value.
 * @param input Key provided
 * @return Return changed number.
 */
int dynamicInputINT(int number, int key);
/**
*Take a input from keyboard
* @return Return value of provided key.
*/
int keyInput();
/**
* Change size of command window (need administrator permision to do that)
* @param width in characters
* @param height in characters
*/
void cmdAdjust(int width, int height);
#endif // !MELIB_H