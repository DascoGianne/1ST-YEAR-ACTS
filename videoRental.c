#include <stdio.h>
#include <conio.h>

int main() {
	
	int time;
	char name[80], type[20];
	
	printf("Good Day! \nPlease enter your name: ");
	gets(name);
	printf("Please enter the type of tape (V for VHS or C for CD): ");
	gets(type);
	printf("Please enter the days late: ");
	scanf("%d", &time);
	
	if (time == 1){
		printf("You were late for %d day, the cost will be 10.00", time);
	}else if (time <=-1) {
	printf("Error, Please enter a valid number of days");
	}else if (time <=0) {
	printf("Thank you for returning on time!");
	}else if (time <=2){
		printf("%s, You were late for %d days, the cost will be 10.00",name, time);
	}else if (time <=4){
		printf("%s, You were late for %d days, the cost will be 15.00",name, time);
	}else if (time <=5){
		printf("%s, You were late for %d days, the cost will be 20.00",name, time);
	}else if (time >= 7 && (type[0] == 'V' || type[0] == 'v')) {
        printf("%s, You were late for %d days, and had a VHS, the cost will be 35.00\n",name, time);
    }else if (time >= 7 && (type[0] == 'C' || type[0] == 'c')) {
        printf("%s, You were late for %d days, and had a CD, the cost will be 50.00\n",name, time);
    }
	
    return 0;
}