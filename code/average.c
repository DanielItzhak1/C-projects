#include <stdio.h>

int average(){
	printf("-----------------------------------\n\n");
	int numberAmount = 0;
	int numbers[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int addedNumbers = 0; 
	printf("Total amount of numbers: ");
	scanf("%d",&numberAmount);
	
	for(int i=0;i<numberAmount;i++){
		printf("Enter a number: ");
		scanf("%d",&numbers[i]);
	}

	for(int i=0;i<numberAmount;i++){
		addedNumbers += numbers[i];
	}
    
    printf("addedNumbers:%d\n",addedNumbers);
    
	printf("The average is %d",(addedNumbers/numberAmount));

	return 0;
}
