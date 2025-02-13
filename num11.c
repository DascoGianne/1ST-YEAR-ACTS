#include <stdio.h>

int main() {
    int ME, YOU = 0, THEY = 10, THEM = 5;

    // Using if statement
    if (ME < 2 && ME > 0) {
        YOU = ME;
    } else if (ME == 5) {
        YOU = THEY * THEM;
    } else if (ME == 2) {
        YOU++;
    } else if (ME == 7) {
        YOU -= 4;
    }

    // Display the value of YOU for all cases
    printf("Value of YOU: %d\n", YOU);

    // Reset YOU for switch statement
    YOU = 0;

    // Using switch..case statement
    switch (ME) {
        case 0:
        case 1:
            YOU = ME;
            break;
        case 5:
            YOU = THEY * THEM;
            break;
        case 2:
            YOU++;
            break;
        case 7:
            YOU -= 4;
            break;
    }

    // Display the value of YOU for all cases
    printf("Value of YOU: %d\n", YOU);

    return 0;
}
