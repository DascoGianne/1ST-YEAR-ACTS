#include <stdio.h>
#include <conio.h>

int main() {
	int a, b, c, choice;
	char name[80];
    while(1){ 
		printf("Please enter your name: ");
		scanf("%s", name);
	do{
		printf("%s, please enter three integers: ", name);
		scanf("%d %d %d", &a, &b, &c);
		
				if (a >= b && a >= c){
					if (b >= c){
					printf("The descending order of the following numbers is: %d, %d, %d", a, b, c);
				}	else if (c >= b)
					printf("The descending order of the following numbers is: %d, %d, %d", a, c, b);
				}
				else if (b >= a && b >= c){
					if (a >= c)
					printf("The descending order of the following numbers is: %d, %d, %d", b, a, c);
					else if (c >= a)
					printf("The descending order of the following numbers is: %d, %d, %d", b, c, a);
				}
				else if (c >= a && c >= b){
					if (a >= b)
					printf("The descending order of the following numbers is: %d, %d, %d", c, a, b);
					else if (b >= a)
					printf("The descending order of the following numbers is: %d, %d, %d", c, b, a);
				}
				else {
				printf("INVALID! Please select three valid integers");
				break;
				}
				printf ("\nwould you like to try again? (1/0): ");
				scanf("%d", &choice);
			} while (choice == 1);
		}
    return 0;
}