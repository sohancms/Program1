#include <stdio.h>
int main()
{
    int n,i,sum=1;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum*i*i;
    }
    printf("The multiplication result is = %d",sum);

return 0;
}
