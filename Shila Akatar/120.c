#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number of n: ");
    scanf("%d",&n);
    for(i=5; i<=n; i=i+5)
    {
        sum=sum+i;
          printf("Some of series = %d ",sum);
    }


return 0;
}
