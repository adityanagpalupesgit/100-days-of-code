#include<stdio.h>

int main()
{
    int num1,num2;
    printf("what is your first number? \n");
    scanf ("%d", &num1);
    printf  ("what is your second number? \n");
    scanf ("%d", &num2);
    printf("the sum of your numbers are %d", num1 + num2);
    printf("the difference of your numbers are %d", num1 - num2);
    printf("the product of your numbers are %d", num1 * num2);
    printf("the quotient of your numbers are %d", num1 / num2);
    printf("the remainder of your numbers are %d", num1 % num2);
    return 0;
}