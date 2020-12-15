#include <stdio.h>
int main()
{
    int X, Y, i, j=0;
    scanf("%d %d",&X ,&Y);
    for(i=1;i<=Y;i++)
    {
        j++;
        if(X==j)
        {
            printf("%d",i);
        }
        else
         printf("%d ",i);
         if(X==j)
        {
            j=0;
            printf("\n");
        }
    }
return 0;
}
