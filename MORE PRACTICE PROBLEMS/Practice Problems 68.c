#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a,b and c: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && a<c)
    {
        printf("The minimum number is : %d",a);
    }
    else if(b<a && b<c)
    {
        printf("The minimum number is : %d",b);
    }
    else if(c<a && c<b)
    {
        printf("The minimum number is : %d",c);
    }
    else
    {
        printf("All are equal");
    }
return 0;
}
