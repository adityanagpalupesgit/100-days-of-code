#include <stdio.h>
int main()
{
   float pi = 3.14,radius,circumfrence,area;
   printf("what is your radius of the circle ? \n");
   scanf("%f\n",&radius);
   circumfrence=2*radius*pi;
   area=pi*radius*radius;
   printf("the area of your circle is : %f",area);
   printf("the circumference of your circle is : %f",circumfrence);
   return 0;


}