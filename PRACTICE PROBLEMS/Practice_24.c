#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int a[1000];
    a[0] = 0,a[1]= 1;
    int i=1,j;
    while(a[i] <= n)
    {
        i=i+1;
        a[i] = a[i-1] + a[i-2];
    }
    for( j = 0; j<=i; j++)
    {
        a[j];
    }
    if(a[j-2] == n)
    {
        printf("The number is Fibonacci Number");
    }
    else
    {
        printf("The number is not Fibonacci Number");
    }
return 0;
}