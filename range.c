#include <stdio.h>
#include <conio.h>

int main(){
	
	int n1, n2, m;
	int count = 0;
	char name[80];
	
	printf("Good Day! \nPlease enter your name: ");
	gets(name);
	
	printf("%s, Please enter an integer for the starting range (N1): ", name);
	scanf("%d", &n1);
	
	printf("%s, Please enter an integer for the ending range (N2): ", name);
	scanf("%d", &n2);
	
	printf("%s, Please enter a divisor (M): ", name);
	scanf("%d", &m);
	
	for(int i = n1; i <= n2; i++){
		if(i % m == 0){
		printf("%d ", i);
		count++;
		}
	}
	printf("\n%s, The total of numbers that are divisible by %d in the range are %d", name, m, count);
	
	return 0;
}