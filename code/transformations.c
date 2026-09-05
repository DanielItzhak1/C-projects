#include <stdio.h>

//function headers
void translation(int xAxis,int yAxis);
void reflection(int xAxis,int yAxis);
void rotation(int xAxis,int yAxis);

int transformations(){
// Setting Variables
	int xVal;
	int yVal;
	int operation;
	int repeat;

	void (*transformations[3])(int, int) = {translation,reflection,rotation};
// Getting x and y
	do{
		char correct;
		printf("Insert x value: ");
		scanf("%d", &xVal);
		printf("Insert y value: ");
		scanf("%d", &yVal);
		printf("\nIs this correct? (%d, %d): ",xVal,yVal);
		scanf("%s",&correct);
		switch(correct){
			case 'y':
				repeat=1;
			break;
			case 'n':
				repeat=0;
			break;
		}
	}while(repeat!=1);
	repeat--;
//Getting transformation
	do{
		printf("\n1.Translation\n2.Reflection\n3.Rotation\nInsert a number between 1-3: ");
		scanf("%d", &operation);
		printf("\n");
		if(operation > 0 && operation < 4){
			repeat=1;
		}
	}while(repeat!=1);
	operation--;
	transformations[operation](xVal,yVal);
	return 0;
}
//Functions
void translation(int xAxis,int yAxis){
	
	return;
}

void reflection(int xAxis,int yAxis){
	
	return;
}

void rotation(int xAxis,int yAxis){
	
	return;
}
