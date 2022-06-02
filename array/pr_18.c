#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int temp,flag=0;
    printf("\nEnter element to search: ");
    scanf("%d",&temp);
    for(i=0;i<n;i++)
    {
        if(arr[i]==temp)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}