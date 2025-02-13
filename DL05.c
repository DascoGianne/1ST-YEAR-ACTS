#include <stdio.h>

int main() {
         // number 5
    for(int g = 3; g >= 1; g--){
        for(int h = 3; h >= g; h--) {
            printf("%d ", h);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
    