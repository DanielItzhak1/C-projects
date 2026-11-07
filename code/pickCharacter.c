#include <ncurses.h>

int pickCharacter(){
	char ch = 'a';
	initscr();
	nodelay(stdscr,TRUE);

	while(getch() == ERR){
		printw("Stop on your character!!!: '%c'",ch);
		ch++;
		if(ch > 'z'){
			ch='a';
		}
		refresh();
		napms(100);
		clear();
		refresh();
	}
	nodelay(stdscr,FALSE);
	clear();
	printw("Your character is: %c!!!",ch);
	refresh();
	getch();
	
	endwin();
	return 0;
}
