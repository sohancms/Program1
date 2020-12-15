#include <stdio.h>
int main()
{
    int x,y, subtracts;
    printf("Enter the value of x and y : ");
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        subtracts=x-y;
        printf("The result of subtracts = %d",subtracts);
    }
    else
    {
        subtracts=y-x;
        printf("The result of subtracts = %d",subtracts);
    }
return 0;
}
