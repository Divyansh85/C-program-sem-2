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
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int first = arr[0], second = arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>first)
        {
            second = first;
            first = arr[i];
        }
        else if(second<arr[i])
        {
            second = arr[i];
        }
    }
    printf("\n");
    printf("Second Highest : %d",second);
}