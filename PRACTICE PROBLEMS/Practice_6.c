#include <stdio.h>
int main()
{
    float c , f;
    printf("Enter the Temperature in Celsius : ");
    scanf("%f", &c);
    f=32+(9*c)/5;
    printf("Temperature if Fahrenheit : %.2f",f);
return 0;
}