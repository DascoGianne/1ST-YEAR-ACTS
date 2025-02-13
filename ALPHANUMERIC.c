#include <stdio.h>
#include <conio.h>

void bubble(int A[], int n, char name[80], int order);
void bubble2(int A[], int n, char name[80]);
void bubble_alphabet(char A[][80], int n, char name[80]);

int main() {
    int n, order;
    char name[80];
    char comma;

    printf("Please enter your name:\n");
    gets(name);
    printf("Hello, %s! Now enter the number of\nelements in the array that you want:\n", name);
    scanf("%d", &n);

    char choice;
    printf("Do you want to enter numeric or alphabetic values? (N/A): ");
    scanf(" %c", &choice);

    if (choice == 'N' || choice == 'n') {
        int A[n];
        int i;
        printf("Please enter the desired numeric elements for your array:\n");
        for (i = 0; i < n; i++) {
            scanf("%d%c", &A[i], &comma);
        }

        printf("Enter 1 for ascending order, 2 for descending order:\n");
        scanf("%d", &order);

        switch(order) {
            case 1: 
                bubble(A, n, name, order);
                break;
            case 2:
                bubble2(A, n, name);
                break;
            default:
                printf("Invalid choice. Enter 1 or 2 only.\n");
        }
    }
    else if (choice == 'A' || choice == 'a') {
        char A[n][80];
        int i;
        printf("Please enter the desired alphabetic elements for your array:\n");
        for (i = 0; i < n; i++) {
            scanf("%s", A[i]);
        }

        bubble_alphabet(A, n, name);
    }
    else {
        printf("Invalid choice. Enter 'N' for numeric or 'A' for alphabetic values.\n");
    }
    
    return 0;
}

void bubble(int A[], int n, char name[80], int order) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if ((order == 1 && A[j] > A[j + 1]) || (order == 2 && A[j] < A[j + 1])) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
        printf("Step %d: ", i + 1);
        for (int k = 0; k < n; k++) {
            printf("%d ", A[k]);
        }
        printf("\n");
    }

    printf("This is the sorted list: ");
    for (i = 0; i < n; i++) {
        printf("%d", A[i]);
        if (i < n - 1)
            printf(",");
    }
    printf("\n");
}

void bubble2(int A[], int n, char name[80]) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (A[j] < A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
        printf("Step %d: ", i + 1);
        for (int k = 0; k < n; k++) {
            printf("%d ", A[k]);
        }
        printf("\n");
    }

    printf("This is the sorted list: ");
    for (i = 0; i < n; i++) {
        printf("%d", A[i]);
        if (i < n - 1)
            printf(",");
    }
    printf("\n");
}

void bubble_alphabet(char A[][80], int n, char name[80]) {
    int i, j;
    char temp[80];
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (strcmp(A[j], A[j + 1]) > 0) {
                strcpy(temp, A[j]);
                strcpy(A[j], A[j + 1]);
                strcpy(A[j + 1], temp);
            }
        }
        printf("Step %d: ", i + 1);
        for (int k = 0; k < n; k++) {
            printf("%s ", A[k]);
        }
        printf("\n");
    }

    printf("This is the sorted list: ");
    for (i = 0; i < n; i++) {
        printf("%s", A[i]);
        if (i < n - 1)
            printf(",");
    }
    printf("\n");
}
    