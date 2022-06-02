#include <stdio.h>

int main()
{
    char s[100];
    int i,k,c=0;
    printf("Enter string: ");
    scanf("%[^\n]",&s);
    k = strlen(s);
    for(i=0;i<k;i++)
    {
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
        {
            c++;
        }
    }
    printf("Total number of words: %d",c);
}