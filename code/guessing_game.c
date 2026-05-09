#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int guessing_game(){
    printf("-----------------------------------\n\n");
    printf("GUESS THE RANDOM NUMBER!!!\n\n");
    srand(time(NULL));
    
    int randNum = (rand() % (20+1));
    #ifdef DEBUG
        printf("randNumber=%d\n\n",randNum);
    #endif
    int guessNum = 0;
    int guesses = 0;
    while(1==1){
        guesses++;
        printf("Enter a number between 0 to 20 (no decimals):");
        scanf("%d", &guessNum);
        if(randNum == guessNum){
            break;
        } else if(randNum > guessNum){
            printf("WRONG!!!\nTry a bigger number next!\n\n");
        } else if(randNum < guessNum){
		printf("WRONG!!!\nTry a smaller number next!\n\n");
	}
    }
    printf("You won at %d amount of tries!!!", guesses);
    printf("\n-----------------------------------\n\n");
    return 0;
}
