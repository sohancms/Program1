#include <stdio.h>
#include <math.h>
int main()
{
    double t,radious=0;
    printf("Enter the angle t : ");
    scanf("%lf",&t);
    radious=t*(M_PI/180);
    printf("The value of sin = %lf",sin(radious));
return 0;
}
