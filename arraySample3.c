#include<stdio.h>

int main() {
    
    int marks [5];
    int index;
    
    printf("Please enter 5 values:\n");
    for(index=0;index<5;index++){
    scanf("%d",&marks [index]);
}
    
    printf("\nDisplaying Values\n");
    for(index=0;index<5;index++){
    
printf("index %d is equal to %d\n",index,marks[index]);
    
}
    return 0;
}