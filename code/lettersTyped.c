#include <ncurses.h>

int lettersTyped(){
	initscr();
	int i = 0;
	while(getch() != '\n'){
		i++;
	}

	endwin();
	printf("You typed %d characters",i++);
	return 0;
}
