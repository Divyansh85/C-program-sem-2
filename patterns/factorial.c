#include <stdio.h>

int main()
{
    int fact = 1,n;
    scanf("%d",&n);
    while(n>0)
    {
        fact = fact*n;
        n = n-1;
    }
    printf("%d",fact);
}