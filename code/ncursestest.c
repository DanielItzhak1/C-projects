#include <ncurses.h>

int ncursestest(){
	initscr();
	
	printw("IT IS WORKING!!!!");

	getch();

	endwin();
	return 0;
}
