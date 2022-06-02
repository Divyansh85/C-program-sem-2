#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    int i=0,count=0;
    scanf("%[^\n]",a);
    printf("%s\n",a);
    int k;
    k = strlen(a);
    for (i = 0; i < k; i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i] = a[i]+32;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            a[i] = a[i]-32;                
        }
         
    }
    printf("%s",a);
    
    return 0;
}
