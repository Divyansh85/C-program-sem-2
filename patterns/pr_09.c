#include <stdio.h>

int main()
{
    int i,j,n,temp;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                temp=0;
            }
            else
            {
                temp=1;
            }
            printf("%d",temp);

        }
        printf("\n");

    }
}