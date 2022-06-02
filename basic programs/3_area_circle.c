#include <stdio.h>

int main()
{
    int r,d;
    int area,cir;
    printf("Enter radius: ");
    scanf("%d",&r);
    d = 2*r;
    area = 3.14*r*r;
    cir = 2*3.14*r;
    printf("Diameter of circle is: %d\n",d);
    printf("Perimeter of cirlce is: %d\n",cir);
    printf("Area of circle is: %d\n",area);
    return 0;
}