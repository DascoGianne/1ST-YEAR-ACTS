#include <stdio.h>
#include <conio.h>

int main() {
	
	float area, price;
	int diameter;
	char name[80];
	
	printf("Hi! Welcome to Domino\'s Pizza. Please enter your name: ");
	gets(name);
	printf("\n10 inches Pizza - 178 Pesos\n12 inches Pizza - 259 Pesos\n14 inches Pizza - 314 Pesos\n");
	printf("\n%s,Plese select a size: ", name);
	scanf("%d", &diameter);
	
	switch(diameter){
		case 10: 
		area= 3.14*(diameter/2)*2;
		price= 178/area;
		printf("The area of the pizza is, %f\nThe price per square inch = %f",area, price);
		break;
		
		case 12: 
		area= 3.14*(diameter/2)*2;
		price= 259/area;
		printf("The area of the pizza is, %f\nThe price per square inch = %f",area, price);
		break;
		
		case 14: 
		area= 3.14*(diameter/2)*2;
		price= 314/area;
		printf("The area of the pizza is, %f\nThe price per square inch = %f",area, price);
		break;
		
		default: printf("Error, Please select a valid Pizza option.");
	}
	
	return 0;
}
