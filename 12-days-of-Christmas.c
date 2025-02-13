#include <stdio.h>
#include <conio.h>


int main(){

    int day;
    char user[80];

    printf("Tell me your name~: ");
    gets(user);

    printf("Hello, %s, What day would you like to have? (1-12): ", user);
    scanf("%d", &day);


    printf("On the %d of Christmas my true love gave to me;\n", day);

        switch (day){

            case 12: printf("Twelve drummers drumming,\n");

            case 11: printf("Eleven pipers piping,\n");

            case 10: printf("Ten lords a-leaping,\n");

            case 9: printf("Nine ladies dancing,\n");

            case 8: printf("Eight maids-a-milking,\n");

            case 7: printf("Seven swans a-swimming,\n");

            case 6: printf("Six geese a-laying,\n");

            case 5: printf("Five golden rings,\n");

            case 4: printf("Four calling birds,\n");

            case 3: printf("Three French Hens,\n");

            case 2: printf("Two turtle doves and,\n");

            case 1: printf("A partridge in a Pear Tree.\n");
            break;

            default: printf("ERROR WRONG NUMBER PLEASE SELECT A NUMBER BETWEEN 1-12\n");
            break;

        }

    return 0;
}