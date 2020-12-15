#include <stdio.h>
int main()
{
    int x,y,divide=0;
    printf("Enter the value of x amd y : ");
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        divide=x/y;
        printf("The result of division = %d",divide);
    }
    else
    {
        divide=y/x;
        printf("The result of division = %d",divide);
    }
return 0;
}
