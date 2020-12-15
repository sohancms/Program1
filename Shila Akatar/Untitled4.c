#include <stdio.h>
int main()
{
    int i,j,n,count=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
       for(j=2;j<=i;j++)
       {
           if(i%j==0)
            break;
       }
       if(i==j)
       {
           count++;

           printf("%d ",i);

       }
    }
    printf("\nTotal number is here = %d",count);
return 0;
}
