#include <stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter the last value : ");
    scanf("%d",&n);
    level: sum=sum+i;
    i++;
    if(i<=n) goto level;
    printf("Some of series : %d",sum);
return 0;
}
