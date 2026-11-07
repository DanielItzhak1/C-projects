#include <ncurses.h>

int lettersTyped(){
	initscr();
	clear();
	refresh();
	int i = 0;
	while(getch() != '\n'){
		i++;
	}

	endwin();
	printf("You typed %d characters!!!\n",i++);
	return 0;
}
