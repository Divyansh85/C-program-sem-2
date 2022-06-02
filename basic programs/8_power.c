#include <stdio.h>

int main()
{
    int num;
    int b;
    int r = 1;
    int i;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Enter number: ");
    scanf("%d",&b);   
    for(i=1;i<=b;i++)
    {
        r = r*num;
    }
    printf("%d raise to the power %d is: %d",num,b,r);
}