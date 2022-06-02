#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    switch(a>b)
    {
        case 0:
        printf("Maximum is %d",b);
            break;
        case 1:
        printf("Maximum is %d",a);
            break;
    }
}