#include <stdio.h>

int main()
{
    int n=3;
    int a[n][n],i,j,temp,s=0;
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
    for(i=1;i<n;i++)
    {
        for(j=0;j<i-1;j++)
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
        printf("Not Upper Triangular.");
    }
    else
    {
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                s = s + a[i][j];
            }
        }
    }
    printf("%d",s);
        
    
    

}