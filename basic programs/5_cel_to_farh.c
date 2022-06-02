#include <stdio.h>

int main()
{
    float c,f;
    printf("Enter temperature in celcius: ");
    scanf("%f",&c);
    f = (1.8*c)+32;
    printf("Temperature in fahrenheit: %.2f\n",f);
    return 0;
}