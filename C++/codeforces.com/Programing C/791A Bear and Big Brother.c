#include <stdio.h>
int main()
{
    int Limak,Bob,i=0;
    scanf("%d %d",&Limak, &Bob);
        while(Limak <= Bob)
        {
          Limak=Limak*3;
          Bob=Bob*2;
          i++;
        }
    printf("%d",i);

return 0;
}
