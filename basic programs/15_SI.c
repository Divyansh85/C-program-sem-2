#include <stdio.h>

int main()
{
    int p,r,t;
    float si;
    printf("Enter principle: ");
    scanf("%d",&p);
    printf("Enter rate: ");
    scanf("%d",&r);
    printf("Enter time: ");
    scanf("%d",&t);
    si = p*r*t/100.0;
    printf("SI is: %.2f",si);
}