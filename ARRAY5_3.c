#include<stdio.h>
#include<math.h>
#include <conio.h>

int main (){

char name [80];
double square_root;
int a, N = 20, sum = 0; 
int X[N], Y[N], Z[N];

printf("Please enter your name:\n");
gets(name);

printf("\n%s, Enter 20 numbers to store in array X:\n", name);
for (a=0; a<N; a++)
{
    scanf("%d", &X[a]);
}
printf("\nEnter 20 numbers to store in array Y:\n");
for (a=0; a<N; a++)
{
    scanf("%d", &Y[a]);
}
for (a=0; a<N; a++)
{
    Z[a] = X[a]*Y[a];
    sum += Z[a]; 
}
for (a=0; a<N; a++)
{
    printf("\nZ[%d] = %d\n", a, Z[a]);
}

square_root = sqrt(sum);

printf("\nSum of Z = %d\n", sum);

printf("\nThe square root of the sum of all values in Z is = %.2lf\n", square_root);

printf("\nThank you for using my program!");

return 0; 
}