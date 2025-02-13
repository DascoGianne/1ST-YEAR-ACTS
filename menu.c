#include <stdio.h>
#include <conio.h>

int main() {
    int Choices, age, IPA;
    char RepeatProcess, Termination, Gender, username [80];

	printf("Please enter your name: ");
    scanf("%s", username);
    
    do {
    	printf("%s, Welcome to our services! Please choose a category to start with.\n", username);
    	printf("\nMenu:\n");
		printf("1. Plato\n2. Smiley\n3. ODD/EVEN\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &Choices);

        switch (Choices) {
            case 1: {
                do {

    		printf("Please enter your age: ");
    			scanf("%d", &age);
    		getchar();
            	printf("Please enter your gender (M or F): ");
            scanf(" %c", &Gender);

    		if (Gender == 'm' || Gender == 'M') {
       			IPA = age / 2 + 7;} 
			else {
        		IPA = (age - 7) * 2;}
        		
    		printf("%s, your ideal partner's age is: %d\n", username, IPA);
                printf("Do you want another session of Ideal Partner's Age Calculator? (Y/N): ");
            scanf(" %c", &RepeatProcess);} 
				while (RepeatProcess == 'Y' || RepeatProcess == 'y');
                break;}
                
            case 2:  {
                do {int a, b, c = 0;

                printf("Please input three numbers: ");
                    scanf("%d %d %d", &a, &b, &c);
                    
                int total = (a + b + c) * 2;
                    printf("Twice the sum of %d, %d, %d is %d. :) :) :)\n", a, b, c, total);
                    
            	printf("Do you want another session of Double the Sum of Three Numbers? (Y/N): ");
                    scanf(" %c", &RepeatProcess);} 
                    
				while (RepeatProcess == 'Y' || RepeatProcess == 'y');
                break;}
                
            case 3:{
                do {int number;
                	printf("Please enter a number: ");
                    scanf("%d", &number);

                if (number % 2 == 1) {
                        printf("%d is an odd number.\n", number);} 
					else {
                        printf("%d is an even number.\n", number);}
                        
                printf("Do you want another session of Odd or Even Number Checker? (Y/N): ");
                    scanf(" %c", &RepeatProcess);}
                    
				while (RepeatProcess == 'Y' || RepeatProcess == 'y');
                	break;}
                
            case 4: {
                printf("Do you really want to terminate the prograam? (Y/N): ");
                scanf(" %c", &Termination);

                if (Termination == 'Y' || Termination == 'y') {
                	printf("Exiting the program.\n");
              	
                return 0;} 
					else {
                break;}
            }
            default:
                printf("Invalid Input\n");}

    } while (1);

    return 0;
}