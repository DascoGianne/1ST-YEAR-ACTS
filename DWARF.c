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
    printf("The factors of the numbers are: 1 ");

    for (factor = 2; factor <= num; factor++) {
        count = 0;
        for (div = 1; div <= factor; div++) {
            if (factor % div == 0) {
                count++;
            }
        }
        if (count == 2) {
            printf("%d ", factor);
            sum += factor;
        }
    }

    printf("\nSum is: %d\n", sum);
    half = num / 2;

    printf("Half of the number is: %d\n", half);

    if (sum > half) {
        printf("%d is DWARF\n", num);
    } else {
        printf("%d is not a DWARF\n", num);
    }

    printf("Thank you for using my program!\n");

    return 0;
}
