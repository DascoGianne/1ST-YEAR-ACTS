#include <stdio.h>
#include <stdlib.h> // for exit()

struct stock {
    int n;
    int style;
    int size;
    float price;
};

struct stock shoe[80];
int inv, choice, count = 0, i, temp;

void menu() {
    printf("[1] Enter a new record\n");
    printf("[2] Display a record\n");
    printf("[3] Change price of a record\n");
    printf("[4] Change a Stock Number\n");
    printf("[5] Exit\n\n");
}

void nrec() {
    printf("Creating new record:\n\n");
    do {
        inv = 0;
        printf("Enter Stock Number: ");
        if (scanf("%d", &shoe[count].n) != 1) {
            scanf("%*s");
            inv = 1;
            printf("Invalid input, please try again\n\n");
        } else if (shoe[count].n < 0) {
            inv = 1;
            printf("Invalid input, please try again\n\n");
        }
    } while (inv == 1);

    do {
        inv = 0;
        printf("Enter style number[0-50]: ");
        if (scanf("%d", &shoe[count].style) != 1) {
            scanf("%*s");
            inv = 1;
            printf("Invalid input, please try again\n\n");
        } else if (shoe[count].style < 0 || shoe[count].style > 50) {
            inv = 1;
            printf("Invalid input, please try again\n\n");
        }
    } while (inv == 1);

    do {
        inv = 0;
        printf("Enter size[3-14]: ");
        if (scanf("%d", &shoe[count].size) != 1) {
            scanf("%*s");
            inv = 1;
            printf("Invalid input, please try again\n\n");
        } else if (shoe[count].size < 3 || shoe[count].size > 14) {
            inv = 1;
            printf("Invalid input, please try again\n\n");
        }
    } while (inv == 1);

    do {
        inv = 0;
        printf("Enter price: ");
        if (scanf("%f", &shoe[count].price) != 1) {
            scanf("%*s");
            inv = 1;
            printf("Invalid input, please try again\n\n");
        } else if (shoe[count].price < 0) {
            inv = 1;
            printf("Invalid input, please try again\n\n");
        }
    } while (inv == 1);

    FILE *fp = fopen("inventory.dat", "a");
    if (fp == NULL) {
        printf("Error opening file\n");
        return;
    }
    printf("Stock Number: %d  Style Number: %d  Size: %d  Price: %.2f\n", shoe[count].n, shoe[count].style, shoe[count].size, shoe[count].price);
    fprintf(fp, "%d %d %d %.2f\n", shoe[count].n, shoe[count].style, shoe[count].size, shoe[count].price);
    printf("Successfully Entered\n");
    fclose(fp);
    count++;
}

void disp() {
    temp = -1;
    printf("Displaying a record:\n\n");
    do {
        inv = 0;
        printf("Use [1]style number or [2]Stock Number? ");
        if (scanf("%d", &choice) != 1) {
            scanf("%*s");
            inv = 1;
            printf("Invalid input, please try again\n\n");
        } else if (choice != 1 && choice != 2) {
            inv = 1;
            printf("Invalid input, please try again\n\n");
        }
    } while (inv == 1);

    if (choice == 1) {
        do {
            inv = 0;
            printf("Please enter Style Number[0-50]: ");
            if (scanf("%d", &choice) != 1) {
                scanf("%*s");
                inv = 1;
                printf("Invalid input, please try again\n\n");
            } else if (choice < 0 || choice > 50) {
                inv = 1;
                printf("Invalid input, please try again\n\n");
            }
        } while (inv == 1);
        for (i = 0; i < count; i++) {
            if (choice == shoe[i].style && shoe[i].size != 0) {
                temp = i;
                break;
            }
        }
    } else if (choice == 2) {
        do {
            inv = 0;
            printf("Please enter Stock Number: ");
            if (scanf("%d", &choice) != 1) {
                scanf("%*s");
                inv = 1;
                printf("Invalid input, please try again\n\n");
            } else if (choice < 0) {
                inv = 1;
                printf("Invalid input, please try again\n\n");
            }
        } while (inv == 1);
        for (i = 0; i < count; i++) {
            if (choice == shoe[i].n && shoe[i].size != 0) {
                temp = i;
                break;
            }
        }
    }

    if (temp == -1) {
        printf("Item does not exist\n");
    } else {
        printf("Stock Number: %d  Style Number: %d  Size: %d  Price: %.2f\n", shoe[temp].n, shoe[temp].style, shoe[temp].size, shoe[temp].price);
    }
}

void price() {
    temp = -1;
    printf("Changing price:\n\n");
    do {
        inv = 0;
        printf("Use [1]style number or [2]stock number? ");
        if (scanf("%d", &choice) != 1) {
            scanf("%*s");
            inv = 1;
            printf("Invalid input, please try again\n\n");
        } else if (choice != 1 && choice != 2) {
            inv = 1;
            printf("Invalid input, please try again\n\n");
        }
    } while (inv == 1);

    if (choice == 1) {
        do {
            inv = 0;
            printf("Please enter Style Number[0-50]: ");
            if (scanf("%d", &choice) != 1) {
                scanf("%*s");
                inv = 1;
                printf("Invalid input, please try again\n\n");
            } else if (choice < 0 || choice > 50) {
                inv = 1;
                printf("Invalid input, please try again\n\n");
            }
        } while (inv == 1);
        for (i = 0; i < count; i++) {
            if (choice == shoe[i].style && shoe[i].size != 0) {
                temp = i;
                break;
            }
        }
    } else if (choice == 2) {
        do {
            inv = 0;
            printf("Please enter Stock Number: ");
            if (scanf("%d", &choice) != 1) {
                scanf("%*s");
                inv = 1;
                printf("Invalid input, please try again\n\n");
            } else if (choice < 0) {
                inv = 1;
                printf("Invalid input, please try again\n\n");
            }
        } while (inv == 1);
        for (i = 0; i < count; i++) {
            if (choice == shoe[i].n && shoe[i].size != 0) {
                temp = i;
                break;
            }
        }
    }

    if (temp == -1) {
        printf("Item does not exist\n");
    } else {
        do {
            inv = 0;
            printf("Enter new price: ");
            if (scanf("%f", &shoe[temp].price) != 1) {
                scanf("%*s");
                inv = 1;
                printf("Invalid input, please try again\n\n");
            } else if (shoe[temp].price < 0) {
                inv = 1;
                printf("Invalid input, please try again\n\n");
            }
        } while (inv == 1);
        printf("Stock Number: %d  Style Number: %d  Size: %d  Price: %.2f\n", shoe[temp].n, shoe[temp].style, shoe[temp].size, shoe[temp].price);

        FILE *fp = fopen("inventory.dat", "w");
        if (fp == NULL) {
            printf("Error opening file\n");
            return;
        }
        for (i = 0; i < count; i++) {
            fprintf(fp, "%d %d %d %.2f\n", shoe[i].n, shoe[i].style, shoe[i].size, shoe[i].price);
        }
        fclose(fp);
    }
}

void change() {
    temp = -1;
    printf("Changing Stock Number:\n\n");
    do {
        inv = 0;
        printf("Use [1]style number or [2]stock number? ");
        if (scanf("%d", &choice) != 1) {
            scanf("%*s");
            inv = 1;
            
            
                    printf("Invalid input, please try again\n\n");
        } else if (choice != 1 && choice != 2) {
            inv = 1;
            printf("Invalid input, please try again\n\n");
        }
    } while (inv == 1);

    if (choice == 1) {
        do {
            inv = 0;
            printf("Please enter Style Number[0-50]: ");
            if (scanf("%d", &choice) != 1) {
                scanf("%*s");
                inv = 1;
                printf("Invalid input, please try again\n\n");
            } else if (choice < 0 || choice > 50) {
                inv = 1;
                printf("Invalid input, please try again\n\n");
            }
        } while (inv == 1);
        for (i = 0; i < count; i++) {
            if (choice == shoe[i].style && shoe[i].size != 0) {
                temp = i;
                break;
            }
        }
    } else if (choice == 2) {
        do {
            inv = 0;
            printf("Please enter Stock Number: ");
            if (scanf("%d", &choice) != 1) {
                scanf("%*s");
                inv = 1;
                printf("Invalid input, please try again\n\n");
            } else if (choice < 0) {
                inv = 1;
                printf("Invalid input, please try again\n\n");
            }
        } while (inv == 1);
        for (i = 0; i < count; i++) {
            if (choice == shoe[i].n && shoe[i].size != 0) {
                temp = i;
                break;
            }
        }
    }

    if (temp == -1) {
        printf("Item does not exist\n");
    } else {
        do {
            inv = 0;
            printf("Enter new Stock Number: ");
            if (scanf("%d", &shoe[temp].n) != 1) {
                scanf("%*s");
                inv = 1;
                printf("Invalid input, please try again\n\n");
            } else if (shoe[temp].n < 0) {
                inv = 1;
                printf("Invalid input, please try again\n\n");
            }
        } while (inv == 1);
        printf("Stock Number: %d  Style Number: %d  Size: %d  Price: %.2f\n", shoe[temp].n, shoe[temp].style, shoe[temp].size, shoe[temp].price);

        FILE *fp = fopen("inventory.dat", "w");
        if (fp == NULL) {
            printf("Error opening file\n");
            return;
        }
        for (i = 0; i < count; i++) {
            fprintf(fp, "%d %d %d %.2f\n", shoe[i].n, shoe[i].style, shoe[i].size, shoe[i].price);
        }
        fclose(fp);
    }
}

void arrange() {
    FILE *fp = fopen("inventory.dat", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return;
    }
    for (int i = 0; i < 50; i++) {
        fscanf(fp, "%d %d %d %f\n", &shoe[i].n, &shoe[i].style, &shoe[i].size, &shoe[i].price);
    }
    count = 0;
    for (int i = 0; i < 50; i++) {
        if (shoe[i].size != 0 || shoe[i].style != 0 || shoe[i].price != 0 || shoe[i].n != 0)
            count++;
    }
    fclose(fp);
}

int main() {
    int choice;
    do {
        arrange();
        do {
            inv = 0;
            menu();
            printf("Please enter the number of your choice: ");
            if (scanf("%d", &choice) != 1) {
                scanf("%*s");
                inv = 1;
                printf("Invalid input, please try again\n\n");
            } else if (choice < 1 || choice > 5) {
                inv = 1;
                printf("Invalid input, please try again\n\n");
            }
        } while (inv == 1);

        switch (choice) {
            case 1:
                nrec();
                break;
            case 2:
                disp();
                break;
            case 3:
                price();
                break;
            case 4:
                change();
                break;
            case 5:
                printf("\nThank you for using this program, have a nice day!");
                exit(0);
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }

        do {
            inv = 0;
            printf("\nContinue using the program? [1-yes][2-no]");
            if (scanf("%d", &choice) != 1) {
                scanf("%*s");
                inv = 1;
                printf("Invalid input, please try again\n\n");
            } else if (choice != 1 && choice != 2) {
                inv = 1;
                printf("Invalid input, please try again\n\n");
            }
        } while (inv == 1);
    } while (choice == 1);

    printf("\nThank you for using this program, have a nice day!");

    return 0;
}
