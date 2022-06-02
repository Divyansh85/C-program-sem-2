#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int e=0,o=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            e = e+1;
        }
        else if(arr[i]%2!=0)
        {
            o = o+1;
        }
    }
    printf("Number of even element is: %d\n",e);
    printf("Number of odd element is: %d",o);
    
}