#include <stdio.h>

int main()
{
    int a=5, b=7;
    int *p,*q;
    p = &a;
    q = &b;
    // int temp;
    // temp = *p;
    // *p = *q;
    // *q = temp;

    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
    printf("a = %d\n",*p);
    printf("b = %d",*q);
}
