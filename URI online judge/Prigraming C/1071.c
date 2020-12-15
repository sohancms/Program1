#include <stdio.h>
int main()
{
    int X, Y, sum_of_odd=0,i;
    scanf("%d %d",&X,&Y);
    for(i=Y+1;i<X;i++)
    {
        if(i%2!=0)
        {
           sum_of_odd=sum_of_odd+i;
        }
    }
    printf("%d\n",sum_of_odd);
return 0;
}
