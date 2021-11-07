#include <stdio.h>
#include <math.h>
int main()
{
    double t, radious=0;
    printf( "Enter the value of angle t : ");
    scanf( "%lf", &t); 
    radious = t * ( M_PI / 180 );
    printf("The value of sin( %.2lf) = %.2lf", t, sin(radious) );
    printf("\nThe value of cos( %.2lf) = %.2lf", t, cos(radious) );
    double n, inverse=0;
    printf("\nEnter the value of n for inverse value :");
    scanf( "%lf", &n );
    inverse = asin(n) * 180 / M_PI ;
    printf("The value of sin inverse( %.2lf) = %.2lf", n, inverse );
return 0;
}