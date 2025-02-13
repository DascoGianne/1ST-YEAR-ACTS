#include <stdio.h>
#include <conio.h>

int main (){

 int age, IPA;
 char gen, name[80];

 puts("Your name please:");
 gets(name);
 printf("Enter your age:");
 scanf("\n%d", &age);
 printf("Your gender please:\n");
 scanf("\n%c", &gen);
 gen = getche() ;

 if (gen == 'm' || gen == 'M')
    IPA = age/2+7;
 else
    IPA = (age-7)*2;
    
 printf("\n%s,your ideal partner's age is %d\n", name, IPA);
 
 return 0;
}