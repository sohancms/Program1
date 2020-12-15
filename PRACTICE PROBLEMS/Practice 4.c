#include <stdio.h>
int main()
{
    float r, area=0;
    printf("Enter the value of radius of a circle is : ");
    scanf("%f",&r);
    area=3.1416*r*r;
    printf("Area=%0.2f", area);

    return 0;
}
