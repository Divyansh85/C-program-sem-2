#include <stdio.h>
#include <math.h>

int main()
{
    int n,digit,temp,k,s=0;
    scanf("%d",&n);
    temp = n;
    k = log10(n) +1;
    while(n>0)
    {
        digit = n%10;
        s = s+ pow(digit,k);
        n = n/10;
    }
    if(s == temp)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not armstrong");
    }
}
