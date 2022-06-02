#include <stdio.h>

int main()
{
    int n1,n2;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    printf("Number before swap : a=%d, b=%d\n",n1,n2);
    n1 = n1+n2;
    n2 = n1-n2;
    n1 = n1-n2;
    printf("Number after swap : a=%d, b=%d\n",n1,n2);

}
