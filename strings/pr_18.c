#include <stdio.h>
#include <string.h>

int main()
{
    int i,c=0,k;
    char s[100];
    char a,r;
    int f=1;
    printf("Enter String: ");
    scanf("%[^\n]",&s);   
    scanf("%c",&r); 
    printf("Enter character: ");
    scanf("%c",&a);
    k = strlen(s);
    for(i=0;i<=k-1;i++)
    {
        if(a==s[i])
        {   f=0;
            c++;
        }
        
    }
    if(f==1)
    {
        printf("Not Found");
    }
    else
    {
        printf("Total number of occurences: %d",c);
    }

}