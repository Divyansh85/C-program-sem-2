#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        arr2[i] = arr1[i];
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);
    }

}