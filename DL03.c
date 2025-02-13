#include <stdio.h>

int main() {
    // number 3
    for(int e = 3; e >= 1; e--){
        for(int f = 1; f <= e; f++) {
            printf("%d ", f);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
    