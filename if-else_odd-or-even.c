#include <stdio.h>

int main () {

int n = 0;

printf("Please enter your number:");
scanf("\n%d", &n);

{
if(n % 2 == 1)
printf("Your number is odd\n");
else
printf("Your number is even\n");
}

printf("thank you");

return 0;
}