#include <stdio.h>

int main()
{
    char c;
    scanf("%c",&c);
    (c>='a' && c<='z'|| c>='A' && c<='Z')?printf("Alphabet"):(c>='0' && c<='9')?printf("Digit"):printf("Special character");
}