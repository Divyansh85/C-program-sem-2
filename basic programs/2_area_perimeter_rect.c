#include <stdio.h>

int main()
{
    int a,b;
    int area,per;
    printf("Enter length: ");
    scanf("%d",&a);
    printf("Enter breadth: ");
    scanf("%d",&b);
    area = a*b;
    per = 2*a+b;
    printf("Perimeter of rectangle is: %d\n",per);
    printf("Area of rectangle is: %d",area);
    return 0;
}