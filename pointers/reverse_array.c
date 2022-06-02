#include <stdio.h>

int main()
{
    int *p,*q,i;
    int n=5;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    p = &a[0];
    q = &a[n-1];
    // printf("%d %d",*p,q);
    while(q>=p)
    {
        printf("%d ",*q);
        q--;
    }


}