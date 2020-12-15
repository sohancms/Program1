#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the three number : ");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y && x>z)
    {
         printf("The maximum number is : %d",x);
    }
    if(y>x && y>z)
    {
        printf("The maximum number is : %d",y);
    }
     if(z>x && z>y)
    {
        printf("The maximum number is : %d",z);
    }
     if(x==y && y==z)
    {
        printf("All are equal");
    }
return 0;
}
