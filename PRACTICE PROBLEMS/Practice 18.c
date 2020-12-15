#include<stdio.h>
int main()
{
    int X, Y, AND=0, OR=0, XOR=0;
    printf("Enter the Two number X and Y  : " );
    scanf("%d %d", &X, &Y);
    AND = X & Y;
    OR = X | Y;
    XOR = X ^ Y;
    printf("The result of bitwise AND = %d", AND);
    printf("\nThe result of bitwise OR = %d", OR);
    printf("\nThe result of bitwise X-OR = %d", XOR);
return 0;
}