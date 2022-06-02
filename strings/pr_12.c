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
    printf("Reverse of the string is : %s\n",b);
    printf("Reverse using function: %s",strrev(a));
}