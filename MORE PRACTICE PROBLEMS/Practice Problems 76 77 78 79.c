#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the two number: ");
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        printf("Maximum number is : %d",x);
    }
    else
    {
        printf("Maximum number is : %d",y);
    }

}
