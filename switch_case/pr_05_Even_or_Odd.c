#include <stdio.h>

int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    switch (a%2==0)
    {
    case 0:
        printf("Odd");
        break;
    
    case 1:
        printf("Even");
        break;
    }
}