#include <stdio.h>

int average(){
	printf("-----------------------------------\n\n");
	unsigned int numberAmount;
	double numbers[15];
	double addedNumbers = 0; 
	printf("Total amount of numbers: ");
	scanf("%d",&numberAmount);
	
	for(int i=0;i<numberAmount;i++){
		printf("Enter a number: ");
		scanf("%lf",&numbers[i]);
	}

	for(int i=0;i<numberAmount;i++){
		addedNumbers += numbers[i];
	}
	printf("The average is %g",(addedNumbers/numberAmount));

	return 0;
}
