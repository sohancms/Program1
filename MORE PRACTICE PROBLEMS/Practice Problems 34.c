#include <stdio.h>
int main()
{
    double F,C;
    printf("Enter the temperature in Fahrenheit : ");
    scanf("%lf",&F);
    C=(5*(F-32))/9;
    printf("The temperature in celsius : %.2lf",C);
return 0;
}
