#include <stdio.h>

int main()
{
    char s[50];
    printf("Enter string: ");
    scanf("%[^\n]",&s);
    printf("%s\n",s);
    printf("%s",strlwr(s));
}