#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    a%100==0 ? (a%400==0 ? printf("Leap Year") : printf("Not a leap year.")): (a%4==0 ? printf("Leap year") : printf("Not a Leap Year"));
}