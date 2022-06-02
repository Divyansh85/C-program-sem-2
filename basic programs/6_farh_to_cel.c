#include <stdio.h>

int main()
{
    float c,f;
    printf("Enter temperature in celcius: ");
    scanf("%f",&f);
    c = (f-32)/1.8;
    printf("Temperature in fahrenheit: %.2f\n",c);
    return 0;
}