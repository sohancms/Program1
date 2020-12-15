#include <stdio.h>
#include <math.h>
float exponential (int n, float x)
{
    float sum = 1.0f;
    for(int i = n-1; i>0; --i)
    {
        sum = 1+x*sum/i;
    }
    return sum;
}

int main()
{
    int n; 
    float x;
    double result1, result2;
    printf("Enter the number n and x : ");
    scanf("%d %f",&n,&x);
    result1 = log(x);
    result2 = log10(x);
    printf("Natural log(%.2f) = %lf ", x, result1);
    printf("\nNatural log10(%.2f) = %lf", x, result2);
    printf("\ne^x = %f",exponential(n, x));
return 0;
}