#include <stdio.h>

int main()
{
    int n;
    printf("Enter day: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("%d",31);
            break;
        case 2:
        printf("%d",28);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("%d",30);
            break;
    }

}