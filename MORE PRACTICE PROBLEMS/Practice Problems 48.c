#include <stdio.h>
#include <math.h>
int main()
{
    double t,radious=0;
    printf("Enter the angle t : ");
    scanf("%lf",&t);
    radious=t*(3.1416/180);
    printf("The value of cot = %lf",1/tan(radious));
return 0;
}

