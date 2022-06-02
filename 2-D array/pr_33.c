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
    for(i=1;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                temp=0;
            }
            else
            {
                temp=1;
            }
        }
    }
        
    if(temp=0)
    {
        printf("Not Lower Triangular.");
    }
    else
    {
       printf("Lower Triangular Matrix");
    }
        
    
    

}