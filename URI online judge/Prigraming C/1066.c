#include <stdio.h>
int main()
{
    int x=5, n, i,odd=0,even=0, positive=0, negetive=0;
    for(i=1;i<=x;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            even++;
        }
        if(n%2!=0)
        {
            odd++;
        }
        if(n>0)
        {
            positive++;
        }
        if(n<0)
        {
            negetive++;
        }
    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",positive);
    printf("%d valor(es) negativo(s)\n",negetive);
  return 0;
}
