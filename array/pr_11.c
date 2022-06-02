#include <stdio.h>

int main()
{
    int arr[100],b[100]={0},i,max,n;
    printf("Enter size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    max++;
    //int b[max]={0};
    for(i=0;i<n;i++)
    {
        b[arr[i]]++;
    }
    for(i=0;i<max;i++)
    {
        if(b[i]>0)
        printf("Total no. of %d = %d\n",i,b[i]);
    }
}