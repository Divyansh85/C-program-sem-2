#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    int total;
    float avg,per;
        
    printf("Enter marks: ");
    scanf("%d",&a);
    printf("Enter marks: ");
    scanf("%d",&b);
    printf("Enter marks: ");
    scanf("%d",&c);
    printf("Enter marks: ");
    scanf("%d",&d);
    printf("Enter marks: ");
    scanf("%d",&e);

    total = a+b+c+d+e;
    avg = total/5;
    per = (total/500.0)*100;

    printf("Total is: %d\n",total);
    printf("Average is: %.2f\n",avg);
    printf("Percentage is: %.2f",per);

}
