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
    printf("\nArray in reverse order is: \n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

}