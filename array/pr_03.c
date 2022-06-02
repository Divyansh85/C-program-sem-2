#include <stdio.h>

int main()
{
    int n,i,s=0;
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
        s = s+arr[i];
    }
    printf("Sum of all elements of array is: %d",s);
}