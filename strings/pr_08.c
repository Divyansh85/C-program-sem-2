#include <stdio.h>

int main()
{
    char s[100];
    int c=0,d=0,e=0,i,k,w=0;
    printf("Enter string: ");
    scanf("%[^\n]",&s);
    k = strlen(s);
    for(i=0;i<k;i++)
    {
        if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z'))
        {
            c++;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            d++;
        }
        else if(s[i]==' ')
        {
            w++;
        }
        else
        {
            e++;
        }
    }
    printf("Total number of alphabets are: %d\n",c);
    printf("Total number of digits are: %d\n",d);
    printf("Total number of special characters are: %d\n",e);
}

