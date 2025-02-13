#include <stdio.h>

int main() {
    int age=0;
    int IPA=0;
    char name[80];
    
    printf("Your name pls:");
    scanf("%s", name);
    printf("%s, Your age pls:", name);
    scanf("%d", &age);
    IPA = (age/2)+7;
    printf("%s your ideal partner's age is %d", name, IPA);
       return 0;
}