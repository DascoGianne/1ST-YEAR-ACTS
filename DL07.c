#include <stdio.h>

int main() {
           // number 7
    for(int n = 3; n >= 1; n--) {
        for(int o = n; o < 3; o++){
            printf(" ");
        }
        for(int p = 1; p <= n; p++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
    