#include <stdio.h>

int main()
{
    int points;
    
    printf("Enter a letter: ");
    scanf("%d", points);
    
    switch (points){
    {
        case 'A': 
            printf("4");
            exit(0);
        case 'B': 
            printf("3");
            break;
        case 'C': 
            printf("2");
            
        case 'E': 
            
        case 'I': 
            
        case 'W': 
            printf("0");
            
        }
        if(points>0)
            printf("Passed, points earned=%d\n",points);
            
        else
            
            printf("Failed, no points earned\n");
    }

    return 0;
}