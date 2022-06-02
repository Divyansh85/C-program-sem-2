#include <stdio.h>

int main()
{
    int n=3;
    int a[n][n],i,j,t[n][n],temp;
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
            t[j][i]=a[i][j];
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(t[i][j]==a[i][j])
            {
                temp=1;
            }
            else
            {
                temp=0;
                break;
            }
        }
    }
    if(temp==0)
    printf("Not Symmetric Matrix");
    else
    printf("Symmetric Matrix");
}