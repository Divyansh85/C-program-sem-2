#include <stdio.h>

int main()
{
    int i,j,n,temp;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    temp = 'A';
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%c ",temp-i+j);
        }
        temp = 'A';
        printf("\n");
    }

}