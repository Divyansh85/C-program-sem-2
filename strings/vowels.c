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
        if(a[i]== 'A' || a[i]== 'E' || a[i]== 'I' || a[i]== 'O' || a[i]== 'U' || a[i]== 'a' || a[i]== 'e' || a[i]== 'i' || a[i]== 'o' || a[i]== 'u') 
        {
            count++;
        }
    }
    printf("Total Number of Vowel are: %d",count);
    
    return 0;
}
