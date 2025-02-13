#include <stdio.h>
#include <conio.h>

int main() {
	char name[80];
    int X[5];
    int Y[5];
	int N[5];
    
    printf("Please enter your name:");
    gets(name);
    
    printf("Enter 5 numbers:\n");
    for (int a = 0; a < 5; a++) {
        scanf("%d", &X[a]);
    }

    for (int a = 0; a < 5; a++) {
        Y[a] = X[4-a];
    }

    printf("Reversed order: ");
    for (int a = 0; a < 5; a++) {
        printf("%d ", Y[a]);
    }
    
    printf("\nThank you for using my program!");

    return 0;
}
    