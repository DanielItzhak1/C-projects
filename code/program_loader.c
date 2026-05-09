#include <stdio.h>

extern void calculator();
extern void guessing_game();
int main(){
    int program;
    while(1==1){
        printf("\n-----------------------------------\n\n");
        printf("\n\n1/Exit \n2/guessing_game \n3/calculator  \n\nEnter: ");
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
        }
    }
    
    return 0;
}