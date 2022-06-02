#include <stdio.h>

int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    switch(a>0)
    {
        case 0:
        switch(a<0)
        {
            case 0:
            printf("Zero");
            break;
            case 1:
            printf("Negative");
            break;
        }
        break;
        case 1:
        printf("Positive");
        break;        
    }
}