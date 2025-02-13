#include <stdio.h>

int main() {
    // number 1
    for(int c = 1; c <= 3; c++){
        for(int d = 3; d >= c; d--) {
            printf("%d ", d);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
    