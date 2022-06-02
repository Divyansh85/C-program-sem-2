#include <stdio.h>
int main()
{
    char s[100];
    int i,k,w=0;
    int  o=0, p=0, q=0, r=0;
    char s1[100],s2[100],s3[100],s4[100];
    printf("Enter string: ");
    scanf("%[^\n]",&s);
    k = strlen(s);
    for(i=0;i<k;i++)
    {
        if((s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') || (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'))
        {
            s1[o] = s[i];
            o++;
        }
        else if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
        {
            s2[p] = s[i];
            p++;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            s3[q] = s[i];
            q++;
        }
        else if(s[i]==' ')
        {
            w++;
        }
        else
        {
            s4[r] = s[i];
            r++;
        }
    }
    printf("First String: %s\n",s1);
    printf("Second String: %s\n",s2);
    printf("Third String: %s\n",s3);
    printf("Fourth String: %s\n",s4);
}

