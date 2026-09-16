#include <stdio.h>
int main()
{
    float sec ,hours,minutes,days;
    printf("Enter how many seconds: \n");
    scanf("%f",&sec);
    hours=sec/3600;
    minutes=sec/60;
    days=sec/86400;
    printf("the time in hours is : %f \n",hours);
    printf("the time in minutes is : %f \n",minutes);
    printf("the time in days is : %f \n",days);
    return 0;
}