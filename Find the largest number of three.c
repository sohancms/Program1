#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number\n");
    scanf("%d %d %d",&a, &b, &c);
    if(a>b && a>c)
    {
        printf("%d is largest",a);
    }
    if(b>c && b>a)
    {
        printf("%d is largest",b);
    }
    if(c>a && c>b)
    {
        printf("%d is largest",c);
    }
    if(a==b && a==c)
    {
        printf("All are equal");
    }

return 0;
}
