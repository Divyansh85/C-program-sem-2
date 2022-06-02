#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,d;
    scanf("%lf%lf%lf",&a,&b,&c);
    d = b*b - 4*a*c;
    switch(d>0)
    {
        case 0:
        switch(d<0)
        {
            case 0:
            printf("The root is: %lf\n",(-b + (double)sqrt(d))/2*a);
                break;
            case 1:
            printf("No real solution exist.\n");
                break;
        }
        case 1:
        printf("The roots are: %lf and %lf",(-b + (double)sqrt(d))/2*a,(-b -(double)sqrt(d))/2*a);
    }   
}