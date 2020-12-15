#include <stdio.h>
int main()
{
    int n,division=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    division=n/2;
    printf("The result = %d",division,division>>1);
return 0;
}
