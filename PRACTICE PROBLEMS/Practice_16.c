#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the number : ");
    scanf("%d",&n);
    for (i = 2; i <= n; i++)
    {
        if( n % i == 0 )
        {
            break;
        }
    }
    if( i == n )
    {
        printf("%d is Prime Number",n);
    }
    else
    {
        printf("%d is not Prime Number",n);
    }
return 0;
}