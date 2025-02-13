#include <stdio.h> 
#include <conio.h>

int main(){
	char name[80];
	int BSIT[20];
	int a; 
	int sum = 0;
    
    printf("Please enter your name:");
    gets(name);
    
	for(a = 0; a < 20; a++) {
		printf("Input a value to %d: ", a);
		scanf("%d", &BSIT[a]);
		
		if (a % 2 == 0) {
			sum += BSIT[a];
		}
	}
	
	printf("\nArray BSIT:\n ");
	
	for(a = 0; a < 20; a++) {
		printf("%d\n ", BSIT[a]);
	}
	
	printf("\nHi, %s! Here's the sum of all even index: %d\n", name, sum);
    
    printf ("\nThank you for using my program!");
    
return 0;    
}