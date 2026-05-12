#include <stdio.h>

double add     (double x, double y)    {return x+y;}
double subtract(double x, double y)    {return x-y;}
double multiply(double x, double y)    {return x*y;}
double divide  (double x, double y)    {return x/y;}

int calculator(){
    double (*operations[4])(double, double) = {add,subtract,multiply,divide};
    
    while(1==1){
        int choice;
        double arg1, arg2;
        printf("-----------------------------------\n\n");
        printf("1/Add\n2/Subtract\n3/Multiply\n4/Divide\n5/Exit\n\nEnter: ");
        scanf("%d", &choice);choice--;
        if(choice >= 0 && choice <= 3){
            printf("\nNum 1: ");
            scanf("%lf", &arg1);
            printf("\nNum 2: ");
            scanf("%lf", &arg2);
            printf("\nResult: %g\n\n", operations[choice](arg1,arg2));
        }else if(choice == 4){
            printf("\nBye!!!");
            printf("\n\n-----------------------------------");
            return 0;
        }else if(choice < 0 || choice > 4){
            printf("\nInvalid choice\n\n");
        }
        
        
    }
    return 0;
}