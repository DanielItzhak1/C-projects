#include <stdio.h>

int average(){
	printf("-----------------------------------\n\n");
	unsigned int numberAmount = 0;
	float numbers[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	float addedNumbers = 0;
	printf("Total amount of numbers: ");
	scanf("%d",&numberAmount);
	
	for(int i=0;i<numberAmount;i++){
		printf("Enter a number: ");
		scanf("%d",&numbers[i]);
	}

	for(int i=0;i<numberAmount;i++){
		addedNumbers += numbers[i];
	}
	double mean = addedNumbers/numberAmount;

	printf("The average is %lf",mean);

	return 0;
}
