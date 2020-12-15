#include <stdio.h>
int main()
{
    double r, area=0;
    printf("Enter the value of r : ");
    scanf("%lf",&r);
    area=3.14165*r*r;
    printf("The area of the circle : %.2lf",area);
return 0;
}
