#include <stdio.h>

int main()
{
  char operator; 
  int num1, num2;
   
  printf("enter operator to be used + - * /:");
  scanf("%c", &operator);
  printf("Enter two operands:");
  scanf("%d %d", &num1, &num2);
  
  
 switch(operator) {
   case '+':
        printf("%d + %d = %d", num1, num2,num1 + num2);
        break;
   case '-':
        printf("%d - %d = %d", num1, num2,num1 - num2);
        break;
   case '*':
        printf("%d * %d = %d", num1, num2,num1 * num2);
        break;
   case '/':
        printf("%d / %d = %d", num1, num2,num1 / num2);
        break;
   
   default:  
        printf("error");
  }
     
    return 0;
}