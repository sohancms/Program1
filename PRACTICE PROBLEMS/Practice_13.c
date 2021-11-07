#include <stdio.h>

int main()
{
    float C,F;
    printf("Enter the temperature of Fahrenheit : ");
    scanf("%f",&F);
    C=5*(F-32)/9;
    printf("The temperature of Celsius = %.2f",C);
return 0;
}
