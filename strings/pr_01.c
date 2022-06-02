#include <stdio.h>

int main()
{
    char s[50];
    int i,len=0;
    printf("Enter string: ");
    scanf("%[^\n]",&s);
    printf("%s\n",s);
    for(i=0;s[i]!='\0';i++)
    {
        len++;
    }
    printf("Length of the string is: %d",len);
}
