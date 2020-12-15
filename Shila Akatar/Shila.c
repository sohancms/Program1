#include <stdio.h>
int main()
{
    int odd=0,n,sum=0;
    printf("Enter the number of n : ");
    scanf("%d",&n);

    for(odd=1;odd<=n;odd=odd+2)
    {
      sum=sum+odd;
    }
     printf("\nThe addition of odd number: %d\n",sum);
    return 0;

}
