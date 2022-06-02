#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    int i=0,count=0;
    scanf("%[^\n]",a);
    printf("%s\n",a);
    int k;
    k = strlen(a);
    for (i = 0; i <= k; i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            count++;
        }
    }
    printf("Total Number of Uppercase letters are: %d",count);
    
    return 0;
}
