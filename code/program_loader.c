#include <stdio.h>

extern void calculator();
extern void guessing_game();
extern void average();
int main(){
    int program;
    while(1==1){
        printf("\n-----------------------------------\n\n");
        printf("\n\n1/Exit \n2/guessing_game \n3/calculator \n4/average  \n\nEnter: ");
        scanf("%d",&program);
        printf("-----------------------------------\n\n");
        switch(program){
            case 1:
                return 0;
            break;
            case 2:
                guessing_game();
            break;
            case 3:
                calculator();
            break;
	    case 4:
		average();
	    break;
        }
    }
    
    return 0;
}
