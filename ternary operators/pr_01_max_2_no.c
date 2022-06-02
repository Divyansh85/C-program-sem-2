#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    a>b ? printf("%d is greater than %d",a,b) : printf("%d is greater than %d",b,a);
}
