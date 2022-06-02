#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    ('A'<=ch && ch<='Z'||'a'<=ch && ch<='z')?printf("Alphabet"):printf("Not an alphabet");
}