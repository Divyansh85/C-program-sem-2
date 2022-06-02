#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int temp =1;
        for(j=n;j>=i;j--)
        {
            printf("%d",temp);
            temp = temp+1;
        }
        printf("\n");
    }
}