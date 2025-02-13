#include <stdio.h>
#include <conio.h>

void bubble(int A[], int n, char name[80]);

int main() {
    int n;
    char name[80];

    printf("Please enter your name:");
    gets(name);
    printf("\nHello, %s! Enter the number of\nelements in the array that you want:\n ", name);
    scanf("%d", &n);

    printf("\nEnter the desired elements for your array:\n");

    int A[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    bubble(A, n, name);

    return 0;
}

void bubble(int A[], int n, char name[80]) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (A[j] > A[j + 1]) {
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

    printf("\nThis is the sorted list:\n");
    for (i = 0; i < n; i++) {
        printf("%d", A[i]);
        if (i < n - 1)
            printf(",");
    }
    printf("\n");
}