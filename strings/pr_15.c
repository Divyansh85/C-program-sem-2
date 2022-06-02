#include <stdio.h>
#include <string.h>

int main()
{
    int i,temp,k;
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
        {
            f=0;
            temp = i;
            break;
        }
    }
    if(f==1)
    {
        printf("Not Found");
    }
    else
    {
    printf("Position of first occurence is: %d",temp); 
    }
}