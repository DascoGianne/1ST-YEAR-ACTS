#include <stdio.h>

int main() {
      // number 4
    for(int k = 1; k <= 3; k++) {
        for(int l = k; l < 3; l++){
            printf(" ");
        }
        for(int m = 1; m <= k; m++){
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
    