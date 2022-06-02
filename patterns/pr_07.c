#include <stdio.h>

int main()
{
    int i,j,n,temp;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    temp = 'A';
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%c ",temp);
        }
        temp = temp+1;
        printf("\n");
    }

}