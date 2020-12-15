#include <stdio.h>
int main()
{
    float n,sum=0,average=0;
    int i,count=0;
    for(i=1;i<=6;i++)
    {
        scanf("%f",&n);
        if(n>0)
        {
            count=count+1;
            sum=sum+n;


        }
    }
     average=sum/count;
      printf("%d valores positivos\n", count);
  printf("%.1f\n",average);

return 0;
}
