#include <stdio.h>

int main()
{
    int n=3;
    int a[n][n],i,j,num;
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
    printf("Enter number: ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j] = num*a[i][j];
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
}
    
    
