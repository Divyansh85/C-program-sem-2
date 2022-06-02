#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        char let=64+i;
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=5;k>=i;k--)
        {
            printf("%c",let);
            let+=1;
        }
        printf("\n");
    }
}