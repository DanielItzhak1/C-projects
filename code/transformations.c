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
		printf("\nInsert x value: ");
		scanf("%d", &xVal);
		printf("Insert y value: ");
		scanf("%d", &yVal);
		printf("\nIs this correct? (%d, %d): ",xVal,yVal);
		scanf("%s",&correct);
		switch(correct){
			case 'y':
				repeat=1;
			break;
			repeat=0;
		}
	}while(repeat!=1);
	repeat--;
//Getting transformation
	do{
		printf("\n1.Translation\n2.Reflection\n3.Rotation\nInsert a number between 1-3: ");
		scanf("%d", &operation);
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
	int xaxis;
	int yaxis;
	printf("Moving x-axis by how much?: ");
	scanf("%d", &xaxis);
	printf("Moving y-axis by how much?: ");
	scanf("%d", &yaxis);

	printf("\n(%d, %d)->(%d, %d)\n", xAxis, yAxis, xAxis + xaxis, yAxis + yaxis);
	return;
}

void reflection(int xAxis,int yAxis){
	char axis;
	printf("What axis?: ");
	scanf("%s", &axis);
	
	switch(axis){
		case 'x':
			printf("\n(%d, %d)->(%d, %d)\n", xAxis, yAxis, xAxis, yAxis * -1);
		break;
		case 'y':
			printf("\n(%d, %d)->(%d, %d)\n", xAxis, yAxis, xAxis * -1, yAxis);
		break;
	}
	return;
}

void rotation(int xAxis,int yAxis){
	int degrees;
	printf("\n1. 90cw-270ccw\n2.180cw-180ccw \n3. 270cw-90ccw\nInsert a number between 1-3: ");
	scanf("%d", &degrees);
	switch(degrees){
		case 1:
			printf("\n(%d, %d)->(%d, %d)\n", xAxis, yAxis, yAxis, xAxis * -1);
		break;
		case 2:
			printf("\n(%d, %d)->(%d, %d)\n", xAxis, yAxis, xAxis * -1, yAxis * -1);
		break;
		case 3:
			printf("\n(%d, %d)->(%d, %d)\n", xAxis, yAxis, yAxis * -1, xAxis);
		break;
	}

	return;
}
