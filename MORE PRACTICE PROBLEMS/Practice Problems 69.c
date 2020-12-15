#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a,b and c : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && b>c || c>b && b>a)
    {
        printf("The middle number is : %d",b);
    }
    else if(c>a && a>b || b>a && a>c)
    {
        printf("The middle number is : %d",a);
    }
    else
    {
        printf("The middle number is : %d",c);
    }
return 0;
}
