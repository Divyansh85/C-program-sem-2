#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    a > b ? (a > c ? printf("%d is greater than %d and %d", a, b, c) : printf("%d is greater than %d and %d", c, a, b)) : (b > c ? printf("%d is greater than %d and %d", b, a, c) : printf("%d is greatest.", c));
}



