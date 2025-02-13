#include <stdio.h>
#include <conio.h>

int main() {

	char name [80];
    int num[11];
    int sum[10];

    printf("Enter your name:");
    gets(name);
    
    printf("Enter eleven numbers:\n");
    
    for (int i = 0; i < 11; i++) {
        printf("Num %d:", i + 1);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 10; i++) {
        sum[i] = num[i] + num[i + 1];
    }

    printf("\nOriginal Array:");
    for (int i = 0; i < 11; i++) {
        printf("\n%d ", num[i]);
    }

    
    printf("\nSUM of TWO succeeding pairs:");
    for (int i = 0; i < 10; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}
    