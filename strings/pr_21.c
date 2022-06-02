#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int i,j,count=0,n;
    printf("Enter string: ");
    gets(s);

    n = strlen(s);

    for(i=0;i<n;i++)
    {
        count = 1;
        if(s[i])
        {
            for(j = i+1;j<n;j++)
            {
                if(s[i]==s[j])
                {
                    count++;
                    s[j] = '\0';
                }
            }
        printf("%c = %d\n",s[i],count);
        }
    }
}