#include <ncurses.h>

int pickCharacter(){
	char ch = 'a';
	initscr();
	clear();
	refresh();
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
	
	endwin();
	printf("Your character is: %c!!!\n",ch);
	return 0;
}
