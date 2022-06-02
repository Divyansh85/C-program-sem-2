#include <stdio.h>

int main()
{
    int n,digit,fact=1,s=0,temp;
    printf("Enter number: ");
    scanf("%d",&n);
    temp = n;
    while(n>0)
    {
        digit = n%10;
        while(digit>0)
        {
            fact = fact*digit;
            digit = digit-1;
        }
        s = s+fact;
        fact = 1;
        n = n/10;
    }
    if(s == temp)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not strong");
    }

}
