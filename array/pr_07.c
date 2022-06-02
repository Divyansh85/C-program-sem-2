#include <stdio.h>

int main()
{
    int n,i,c=0;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            c = c+1;
        }
    }
    printf("Total number of negative elements are: %d",c);
}