#include <stdio.h>
int main()
{
    float principle, rate, time, simple_interest,compound_interest;
    printf("Enter the principle amount : \n");
    scanf("%f",&principle);
    printf("enter what is the rate of interest : \n");
    scanf("%f",&rate);
    printf("enter your time period :  \n");
    scanf("%f",&rate);
    simple_interest=(principle*rate*time)/100;
    compound_interest=principle*(1+rate/100)*time;
    printf("the simple interest is : %f \n",simple_interest);
    printf("the compound interest is : %f \n",compound_interest);
    return 0;
}