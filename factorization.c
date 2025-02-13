#include <stdio.h>
#include <conio.h>

int main() {
	
	int num, i;
	
	printf("Good Day!\nPlease enter a positive integer: ");
	scanf("%d", &num);
	printf("The prime factorization of %d is: \n", num);
	
	for(i=2;i<=num;i++){
		while(num % i==0){
		printf("%d\n", i);
		num /= i;
		}
	}
		

    return 0;
}