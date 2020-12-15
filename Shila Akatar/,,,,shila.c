#include <stdio.h>
int main()
{

    int n,sum=0,i;
    printf("Enter the number of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        sum=sum+i*i;
    }
    printf("\nThe addition of number = %d",sum);
return 0;

}
