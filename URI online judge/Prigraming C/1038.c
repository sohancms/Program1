#include <stdio.h>
int main()
{
    int X,Y;
    double p;
    scanf("%d %d",&X,&Y);
    if(X==1)
    {
        p=Y*4.00;
        printf("Total: R$ %0.2lf\n",p);
    }
    else if(X==2)
    {
        p=Y*4.50;
        printf("Total: R$ %0.2lf\n",p);
    }
    else if(X==3)
    {
        p=Y*5.00;
        printf("Total: R$ %0.2lf\n",p);
    }
    else if(X==4)
    {
        p=Y*2.00;
        printf("Total: R$ %0.2lf\n",p);
    }
    else if(X==5)
    {
        p=Y*1.50;
        printf("Total: R$ %0.2lf\n",p);
    }

return 0;
}
