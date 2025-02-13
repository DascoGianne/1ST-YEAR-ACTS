#include <stdio.h>
#include <conio.h>

void bubble(int A[], int n, char name[80], int order);
void bubble2(int A[], int n, char name[80]);

int main() {
    int n, order;
    char name[80];
    char comma, res;

    printf("Please enter your name:\n");
    gets(name);
    do{
    x:
    printf("\nOkay, %s! Enter your preferred number of\nelements in the array:\n", name);
    scanf("%d", &n);

    printf("\nPlease enter the desired elements for your array:\n");
    
     int A[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d%c", &A[i], &comma);
    }
    
    
    printf("\nEnter 1 for ascending order and 2 for descending order:\n");
    scanf("%d", &order);

    
    switch(order) {
        case 1: 
            bubble(A, n, name,order);
            break;
        case 2:
            bubble2(A, n, name);
            break;
        default:
            printf("Invalid choice. Enter 1 or 2 only.\n");
    }
    printf("\nDo you want to have another try? Y - Yes, N- No:\n");
    scanf("\n%c",&res);
    if(res=='N'||res=='n')
    {y:printf("\nThank you for using our program. Have a good day!");}
    else if(res=='y'||res=='Y')
    {goto x;}
    else if(res!='n'||res!='N'||res!='y'||res!='Y')
    printf("Invalid response. Enter only y or n please.");
    
    do{
     z:
     scanf("\n%c",&res);
     if(res=='y'||res=='Y')
     break;
     else if(res=='n'||res=='N')
     {goto y;}
     else
     {printf("Invalid response. Try again");
     goto z;}
    }while(res!='n'||res!='N'||res!='y'||res!='Y');
    
    }while(res=='y'||res=='Y');

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

    printf("\nThis is the sorted list: ");
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