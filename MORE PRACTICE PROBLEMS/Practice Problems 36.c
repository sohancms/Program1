#include <stdio.h>
int main()
{
    unsigned int x,y,AND=0;
    printf("Enter the value of x and y : ");
    scanf("%d %d",&x,&y);
    AND=x|y;
    printf("The result of bitwise AND = %d",AND);
return 0;
}
