#include <stdio.h>

int main() {
    // number 1
    for(int a = 1; a <= 3; a++){
        for(int b = 1; b <= a; b++) {
            printf("1 ");
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
    