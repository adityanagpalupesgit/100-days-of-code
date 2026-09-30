#include <stdio.h>
int main()
{
    printf("enter your number : \n");
    int num;
    scanf("%d",&num);
    if (num==0)
     {
    printf("the number is 0 ");
    }
    else if (num>0)
    {
        printf("the number is positive");
    }
    else  if (num<0)
    {
        printf("the number is negative");
    }
}