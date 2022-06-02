#include <stdio.h>
#include <string.h>
int main()
{
    char str[256];
    int  temp[256],i,j,k=0,count=0,n,len;
    printf("C Program to Find Maximum Occurring Character in a String \n");
    printf("Please Enter a String :  ");
    scanf("%[^\n]", str);
    len = strlen(str);
    for(i=0;i<len;i++)
    {
        temp[i]=0;
        count=1;
        if(str[i])
        {
          for(j=i+1;j<len;j++)
          {
            if(str[i]==str[j])
            {
                count++;
                str[j]='\0';
            }
          }
        }
       temp[i]=count;
       if(count>=k)
        k=count;
    }
    printf("Maximum Occurring Character in a String");
    for(j=0;j<len;j++)
        {
 
            if(temp[j]==k)
            {
                printf(" '%c',",str[j]);
            }
       }
    printf("\b= %d times \n ",k);
    return 0;
}