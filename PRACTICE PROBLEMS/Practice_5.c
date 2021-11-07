#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s, area;
    printf("Enter length of a,b,c in metre:\n");
    scanf("%f %f %f",&a, &b, &c);
    if(a+b>c && b+c>a && c+a>b)
    {
        s=(a+b+c)*.5;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("The area of the triangle is = %0.2f", area);
    }
    else
     printf("The triangle is not formed");
     return 0;
}
