#include <stdio.h>

int main()
{
    int n=3, (*p)[3];;
    int a[n][n],i,j;
    p = a; // or int(*p)[n] = a;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&p[i][j]);
        }
    }
    // for(i=0;i<n;i++)
    // {
    //     for(j=0;j<n;j++)
    //     {
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }
   
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }

}
