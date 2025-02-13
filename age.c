#include <stdio.h>

int main () {

int age;

printf("Enter your age:\n");
scanf("%d", &age);

{
if(age>0 && age<=12)
   printf("You are a kid\n");

else if(age<=19 && age>=13)
   printf("You are a teenager\n");

else if(age>=20)
   printf("You are an adult\n");

else
   printf("Input only positive integers\n");

}

   printf("Thank you!");

return 0;
}