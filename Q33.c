#include <stdio.h>
int main()
{
    int i ,n, remainder,ang;
    printf("what is the number ?) \n ");
    scanf("%d",&n);
    while(n>0)
    {remainder = n%10;
        ang=remainder*remainder*remainder;
        n=n/10;
    }
    if(ang==n)
    {
        printf("the number is armstrong \n");
    }
    else
    {
        printf("the number is not armstrong \n");
    }
}