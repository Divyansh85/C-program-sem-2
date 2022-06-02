#include <stdio.h>

int main()
{
    int n1,i,n2,j=0;
    printf("Enter size of first array: ");
    scanf("%d",&n1);
    int arr1[n1];
    for(i=0;i<n1;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n1;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    printf("Enter size of second array: ");
    scanf("%d",&n2);
    int arr2[n2];
    for(i=0;i<n2;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n2;i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");
    int size;
    size = n1+n2;
    int arr[size];
    for(i=0;i<n1;i++)
    {
        arr[i]=arr1[i];
    }
    for(i=n1;i<size;i++)
    {
        arr[i]=arr2[j];
        j++;
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

}