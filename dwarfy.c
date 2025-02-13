#include <stdio.h>
#include <conio.h>

int main() {
    int num, factor, count, div, sum, half;
    char name[80];

    puts("Please enter your name:");
    gets(name);
    printf("Hello, %s!\n", name);

    printf("Input a positive integer: ");
    scanf("%d", &num);
    printf("The number is: %d\n", num);
    printf("The factors of the numbers are: ");

    for (factor = 1; factor < num; factor++) {
            if (num % factor == 0) {
            printf("%d ", factor);
            sum += factor;
        }
    }

    printf("\nSum is: %d\n", sum);
{
    printf("Half of the number is: %.1f\n", (float)num/2);

    if (sum > num) {
        printf("%d is DWARF\n", num);
    } else {
        printf("%d is not a DWARF\n", num);
    }
}
    printf("Thank you for using my program!\n");

    return 0;
}