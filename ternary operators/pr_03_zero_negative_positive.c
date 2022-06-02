#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    a<1 ? (a<0 ? printf("Number is negative."): printf("Number is zero")):printf("Number is positive");
}