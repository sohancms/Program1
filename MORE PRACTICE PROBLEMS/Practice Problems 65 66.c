#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of x and y : ");
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        printf("the minimum number is : %d",y);
    }
    else
    {
       printf("the minimum number is : %d",x);
    }
return 0;
}

