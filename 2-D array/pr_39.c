#include <stdio.h>

int main()
{
    int n=3;
    int a[n][n],i,j,c1=0,c2=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                c1 += 1;
            }
            else
            {
                c2 += 1;
            }
        }
    }
    if(c1>c2)
    {
        printf("Sparse Matrix");
    }
    else
    {
        printf("Not Sparse Matrix");
    }

}