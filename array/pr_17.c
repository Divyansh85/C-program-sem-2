#include <stdio.h>

int main()
{
    int n,i,j=0,k=0;
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
    printf("\n");
    int arr1[n],arr2[n];
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            arr1[j] = arr[i];
            j++;
        }
        else
        {
            arr2[k] = arr[i];
            k++;
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    for(i=0;i<k;i++)
    {
        printf("%d ",arr2[i]);
    }

}