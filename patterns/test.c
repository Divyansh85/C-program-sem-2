#include <stdio.h>

int main()
{
    int i,j,n,k;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int temp =64+i; 
        for(k=1;k<i;k++)
        {
            printf(" ");
        }
        for(j=n;j>=i;j--)
        {
            printf("%c",temp);
            temp = temp+1;
        }
        
        printf("\n");
    }
}