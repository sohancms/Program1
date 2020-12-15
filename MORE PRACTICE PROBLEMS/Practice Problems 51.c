#include <stdio.h>
#include <math.h>
int main()
{
    double n,result=0;
    printf("Enter the value of n : ");
    scanf("%lf",&n);
    result = asin(n)*180/M_PI;
    printf("the result of sin inverse : %.2lf",result);
return 0;
}
