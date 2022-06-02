#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,5},*p,i;
    p = a;
    for(i=0;i<5;i++)
    {
        printf("%d",p[i]);//or *(p+i) or *p
        p++;
    }

}
