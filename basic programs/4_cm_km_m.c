#include <stdio.h>

int main()
{
    float r;
    float a,b;
    printf("Enter length: ");
    scanf("%f",&r);
    a = r/100;
    b = r/100000;
    printf("Length in m is: %f\n",a);
    printf("Length in km is: %f\n",b);
    return 0;
}