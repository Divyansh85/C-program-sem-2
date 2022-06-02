#include <stdio.h>

int main()
{
    int n,i,pos;
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
    printf("\nEnter position: ");
    scanf("%d",&pos);   
    if(pos>n)
    {
        printf("Deletion not possible.");
    }
    else
    {
        for (i = pos - 1; i < n -1; i++)  
        {  
            arr[i] = arr[i+1]; 
        }  
    }
    printf ("The resultant array is: "); 
    for (i = 0; i< n - 1; i++)  
        {  
            printf (" %d ", arr[i]);  
        }  
}