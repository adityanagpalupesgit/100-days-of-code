#include <stdio.h>
int main()
{
    float bredth ,length;
    printf("what is the length? \n");
    scanf("%f",&length);
    printf("what is the bredth ? \n");
    scanf("%f",&bredth);
    printf("the perimeter of the square is %f",2*(length*bredth));
    return 0;
}