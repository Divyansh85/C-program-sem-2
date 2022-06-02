#include <stdio.h>

int main()
{
    int n=3;
    int a[n][n],i,j,s1=0,s2=0;
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
    printf("Major diagonal elements are : ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                printf("%d ",a[i][j]);
                s1 = s1+a[i][j];
            }
        }
    }
    printf("\n");
    printf("Sum of major diagonal elements is: %d",s1);
    printf("\n");
    printf("Minor diagonal elements are : ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==2)
            {
                printf("%d ",a[i][j]);
                s2 = s2+a[i][j];
            }
        }
    }
    printf("\n");
    printf("Sum of minor diagonal elements is: %d",s2);
}