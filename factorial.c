#include <stdio.h>  
#include <conio.h>

int main() {   
	int n, i, factorial = 1;   
	char name[80]; 
	
	printf("Good Day! \nPlease enter your name: ");
	gets(name);
	printf("%s, Enter a positive integer: ",name);   
	scanf("%d", &n);   
	
	if (n < 0) {   
	printf("Error please input a positive integer.\n");
	return 0;  
	}for (i = 1; i <= n; i++) {     
	factorial *= i;   
	}printf("the factorial of %d = %d\n", n, factorial);    
	
	return 0; 
} 