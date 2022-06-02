#include <stdio.h>

int main()
{
    char s[100];
    int c=0,d=0,i,k,w=0;
    printf("Enter string: ");
    scanf("%[^\n]",&s);
    k = strlen(s);
    for(i=0;i<k;i++)
    {
        if((s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') || (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'))
        {
            c++;
        }
        else if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
        {
            d++;
        }
        else
        {
            w++;
        }
    }
    printf("Total number of vowels are: %d\n",c);
    printf("Total number of consonants are: %d\n",d);
}

