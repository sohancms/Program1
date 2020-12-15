#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the value of number of n : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+i*i;
    }
    printf("Some of series = %d",sum);

return 0;
}
