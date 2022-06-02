#include <stdio.h>
#include <math.h>

int main()
{
    int p,r,t,n;
    float ci;
    printf("Enter principle: ");
    scanf("%d",&p);
    printf("Enter rate: ");
    scanf("%d",&r);
    printf("Enter time: ");
    scanf("%d",&t);
    printf("Enter n: ");
    scanf("%d",&n);
    ci = pow(p*(1+r/n),n*t)-p;
    printf("CI is: %.2f",ci);
}