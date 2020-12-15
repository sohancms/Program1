#include <stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=n;;i++)
    {
        if(i%2!=0)
        {
            c=c+1;
            printf("%d\n",i);
        }
        if(c==6)
        {
            break;
        }
    }

return 0;
}
