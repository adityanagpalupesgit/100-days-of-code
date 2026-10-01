#include <stdio.h>
int main()
{
    int n,remainder,i;
    long long int factorial=1;
    printf("what is the number for which you want to check prime ? \n ");
    scanf("%d",&n);



    for(i=1;i<=n-1;i++)
    {
           factorial=(factorial*i);
    }   
    remainder=(factorial+1)%n;
    if(remainder==0)
    {
        printf("the number is prime \n");
    }
    else
    {
        printf("the number is not prime \n");
    } 

}