#include <stdio.h>
int main()
{
    int X,N,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&X);
        if(X%2!=0)
        {
            if(X>0)
            {
                 printf("ODD POSITIVE\n");
            }
            else if(X<0)
            {
                printf("ODD NEGATIVE\n");
            }
        }
        if(X%2==0)
        {
            if(X>0)
            {
                 printf("EVEN POSITIVE\n");
            }
            else if(X<0)
            {
                printf("EVEN NEGATIVE\n");
            }
        }
        if(X==0)
        {
            printf("NULL\n");
        }
    }

return 0;
}
