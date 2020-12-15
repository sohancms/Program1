#include <stdio.h>
#include <math.h>
int main()
{
    double t,radious=0;
    printf("Enter the angle t : ");
    scanf("%lf",&t);
    radious=t*(3.1416/180);
    printf("The value of cosec = %lf",1/sin(radious));
return 0;
}


