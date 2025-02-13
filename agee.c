#include <stdio.h>
#include <conio.h>

int main () {

int Age;
char name [80];

 printf("Please enter your name:\n");
 gets(name);
 
 printf("Please enter your age:\n");
 scanf("%d", &Age);
 
 {
 if(Age>=0 && Age <=4)
    printf("You're a baby\n");
 
 else if(Age>=5 && Age <=12)
    printf("You're a child\n");
 
 else if(Age>=13 && Age <=19)
    printf("You're a teenager\n");
    
 else if(Age>=20 && Age <=59)
    printf("You're an adult\n");
    
    
 else if(Age>=60)
    printf("You're a senior\n");
 
 else
    printf("Invalid Input!\n");
 
 }
 
    printf("Thank you for using my program!");
 
 return 0;
}