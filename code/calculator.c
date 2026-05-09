#include <stdio.h>

int add(int x, int y)           {return x+y;}
int subtract(int x, int y)      {return x-y;}
int multiply(int x, int y)      {return x*y;}

int calculator(){
    int (*operations[3])(int, int) = {add,subtract,multiply};
    
    while(1==1){
        int choice, arg1, arg2;
        printf("-----------------------------------\n\n");
        printf("1/Add\n2/Subtract\n3/Multiply\n4/Exit\n\nEnter: ");
        scanf("%d", &choice);choice--;
        if(choice >= 0 && choice <= 2){
            printf("\nNum 1: ");
            scanf("%d", &arg1);
            printf("\nNum 2: ");
            scanf("%d", &arg2);
            printf("\nResult: %d\n\n", operations[choice](arg1,arg2));
        }else if(choice == 3){
            printf("\nBye!!!");
            printf("\n\n-----------------------------------");
            return 0;
        }else if(choice < 0 || choice > 3){
            printf("\nInvalid choice\n\n");
        }
        
        
    }
    return 0;
}