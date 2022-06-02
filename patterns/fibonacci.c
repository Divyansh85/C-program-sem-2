#include <stdio.h>

int main()
{
    int n,x=0,y=1,z=0;
    scanf("%d",&n);
    while(z<=n)
    {
        printf("%d\n",z);
        x = y;
        y = z;
        z = x+y; 
    }
}