#include <stdio.h>

int main()
{
    int n,m,i,ele,pos;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter number of elements: ");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("Enter element at index %d: ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<m;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Enter element and position: ");
    scanf("%d%d",&ele,&pos);
    for(i=m-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos] = ele;
    m++;
    printf("\nArray after insertion of element is: ");
    for(i=0;i<m;i++)
    {
        printf("%d ",arr[i]);
    }

}