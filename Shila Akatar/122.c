#include <stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter the value of number of n : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+pow(i,5);
    }
    printf("Some of series = %d",sum);

return 0;
}
