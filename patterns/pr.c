#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        int c=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                c = c+1;
            }
        }
        if(c==0)
        {
            printf("%d",i);
        }

    }
}