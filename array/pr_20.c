#include <stdio.h>

int main()
{
    int n,i,j=0,k=0,l,m;
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
    printf("\n");
    int temp=0;
    for(i=0;i<j;i++)
    {
        for(l=0;l<j-i;l++)
        {
            if(arr1[l]>arr1[l+1])
            {
                temp=arr1[l];
                arr1[l]=arr1[l+1];
                arr1[l+1]=temp;
            }
        }
        temp=0;
    }
    for(i=0;i<k;i++)
    {
        for(m=0;m<k-i;m++)
        {
            if(arr2[m]>arr2[m+1])
            {
                temp=arr2[m];
                arr2[m]=arr2[m+1];
                arr2[m+1]=temp;
            }
        }
        temp=0;
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