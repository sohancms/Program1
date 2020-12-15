#include <stdio.h>
int main()
{
    double C,F;
    printf("Enter the temperature in celsius : ");
    scanf("%lf",&C);
    F=32+(9*C)/5;
    printf("The temperature in Fahrenheit : %.2lf",F);
return 0;
}
