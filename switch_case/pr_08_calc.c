#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch,n;
    int a,b;
    
    printf("Enter operation: ");
    scanf("%c",&ch); 
    printf("Enter first number: ");  
    scanf("%d",&a);  
    printf("Enter second number: ");
    scanf("%d",&b); 


    switch (ch)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '/':
        printf("%d",a/b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    }
}