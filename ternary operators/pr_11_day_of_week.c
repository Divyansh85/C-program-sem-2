#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    (a==1)?printf("Sunday"):(a==2)?printf("Monday"):(a==3)?printf("Tuesday"):(a==4)?printf("Wednesday"):(a==5)?printf("Thursday"):(a==6)?printf("Friday"):(a==7)?printf("Saturday"):printf("Wrong Day!!");
}