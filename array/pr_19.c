#include <stdio.h>

int main()
{
    int n,i,j,temp=0;
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
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(arr[j+1]<arr[j])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        temp=0;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}