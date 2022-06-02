#include <stdio.h>
#include<string.h>

int main()
{
    int i,j=0,k;
    char a[50],b[50];

    printf("Enter String: ");
    scanf("%[^\n]",&a);
    k = strlen(a);
    for(i=k-1;i>=0;i--)
    {
        b[j] = a[i];
        j++;
    }
    b[j] = '\0';
    int temp = 0;
    for(i=0;i<k;i++)
    {
        if(a[i]!=b[i])
        {
            temp = 1;
            break;
        }
    }
    if(temp == 0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    
}