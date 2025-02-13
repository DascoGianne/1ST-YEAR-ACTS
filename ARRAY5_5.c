#include <stdio.h>
#include <conio.h>

int main() {
    char Name[50];
    int Answers[5];
    int Score = 0;
    float Average = 0;
    
    printf("Enter student name:");
    gets(Name);

   printf("Enter Answer #1:");
     scanf("%d", &Answers[0]);
    
   printf("Enter Answer #2:");
     scanf("%d", &Answers[1]);
    
   printf("Enter Answer #3:");
    scanf("%d", &Answers[2]);
    
   printf("Enter Answer #4:");
    scanf("%d", &Answers[3]);
    
   printf("Enter Answer #5:");
    scanf("%d", &Answers[4]);
    
    
    for (int i = 0; i < 5; ++i) {
    }
        
    
int calculate(int answers[]);
    int total = 0; 
    
    for (int i = 0; i < 5; ++i) {
        switch (Answers[i]) {
            case 1:
            	Score += 1;
                printf("1\n");
                break;
            case 2:
            	Score += 2;
                printf("2\n");
                break;
            case 3:
            Score += 3;
                printf("3\n");
                break;
            case 4:
            Score += 4;
                printf("4\n");
                break;
            case 5:
            	Score += 5;
                printf("5\n");
                break;
            
            default:
                printf("No points\n");
        }
    }
 
    Average = (float)Score / 5;

    printf("%s, your total score is %d and your average score is %.2lf.", Name, Score, Average);
    
    return 0;
}
    