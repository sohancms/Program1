#include <stdio.h>
int main()
{
    float x,y,divide=0;
    printf("Enter the value of x and y : ");
    scanf("%f %f",&x,&y);
    if(x>y)
    {
        divide=x/y;
        printf("The result of division = %.2f",divide);
    }
    else
    {
        divide=y/x;
        printf("The result of division = %.2f",divide);
    }
return 0;
}
