#include <stdio.h>

int main()
{
    int n,i,max,min;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("Maximum is: %d\n",max);
    printf("Minimum is: %d",min);
}