#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);

    ch>='A' && ch<='Z'?printf("Uppercase"):printf("Lowercase");

}