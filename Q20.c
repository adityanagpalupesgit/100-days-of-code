#include <stdio.h>
int main()
{   int day ;
    printf("enter the number for the day (1-7) :");
    scanf("%d",&day);
    switch (day)
    {   case 1 :
        printf("your day is MONDAY");
        break;
        case 2 : 
        printf("your day is TUESDAY");
        break;
        case 3 :
        printf("the day is WEDNESDAY");
        break;
        case 4 :
        printf("the day is  THURSDAY");
        break;
        case 5 :
        printf("the day is FRIDAY");
        break;
        case 6 :
        printf("the day is SATURDAY");
        break;
        case 7 :
        printf("the day is SUNDAY");
        break;
        default :
        printf("the entered digit is not valid!!");
        break;
    }
    return 0;
}
