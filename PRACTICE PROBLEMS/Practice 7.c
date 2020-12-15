#include <stdio.h>
int main()
{
    float f,c=0;
    printf(" Fahrenheit = ");
    scanf("%f",&f);
    c=(((f-32)/9))*5;
    printf(" Celsius = %.2f",c);
    return 0;
}
