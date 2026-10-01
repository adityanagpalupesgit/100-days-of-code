#include <stdio.h>
int main()
{
    int i,factorial,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    factorial=1;
    for(i=0;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("The factorial of %d is %d",n,factorial);