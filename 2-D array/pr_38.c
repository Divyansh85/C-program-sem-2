#include <stdio.h>

int main()
{
    int n=3;
    int a[n][n],i,j,temp;
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
            if(i==j && a[i][j]==1)
            {
                temp = 0;
            }
            else if (i!=j && a[i][j]==0)
            {
                temp=0;
            }
            else
            {
                temp=1;
                break;
            }
        }
        
    }
    if(temp==1)
    {
        printf("Not Identity matrix");
    }
    else
    {
        printf("Identity Matrix");
    }



}