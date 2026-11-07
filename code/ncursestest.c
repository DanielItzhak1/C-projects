#include <ncurses.h>

int ncursestest(){
	initscr();
	
	printw("5");

	getch();

	endwin();
	return 0;
}
