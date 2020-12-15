#include <stdio.h>
int main()
{
    float c,F;
    printf("Enter the Temperature on Celsius : ");
    scanf("%f",&c);
    F=32+(9*c)/5;
    printf("Temperature of Fahrenheit = %.2f",F);
return 0;
}
