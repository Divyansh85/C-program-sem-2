#include <stdio.h>
#include <math.h>

int main()
{
    int n,l,s=0,k,i;
    scanf("%d",&n);
    l = n%10;
    k = log10(n);
    for(i=1;i<=k;i++)
    {
        n = n/10;
    }
    s = s + l + n;
    printf("%d",s); 

}