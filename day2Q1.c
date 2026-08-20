#include <stdio.h>

int main()
{
    int length,breadth;
    printf ("what is the length of your rectangle???? \n");
    scanf ("%d\n",&length);
    printf ("what is your breadth of your recatangle  : \n");
    scanf ("%d\n",&breadth);
    printf ("THE AREA OF YOUR RECTANGLE IS %d\n",length*breadth);
    printf ("THE PERIMETER OF YOUR RECTANGLe IS %d\n",2*(length+breadth));
    return 0;

}