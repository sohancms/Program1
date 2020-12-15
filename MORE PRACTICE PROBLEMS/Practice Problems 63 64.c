#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of x and y : ");
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        printf("the maximum number is : %d",x);
    }
    else
    {
       printf("the maximum number is : %d",y);
    }
return 0;
}
