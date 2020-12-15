#include <stdio.h>
int main()
{
    int cse1111,cse1121,physics,math,bdstudy,total;
    double per;
    printf("cse1111 : ");
    scanf("%d",&cse1111);
    printf("cse1121 : ");
    scanf("%d",&cse1121);
    printf("physics : ");
    scanf("%d",&physics);
    printf("math : ");
    scanf("%d",&math);
    printf("bdstudy : ");
    scanf("%d",&bdstudy);
    total=cse1111+cse1121+physics+math+bdstudy;
    per=(total*100)/500;
    printf("Total Marks = %d\n",total);
    printf("Percentage = %.2lf\n",per);
    if(per>=60)
    {
        printf("First Division");
    }
    else if(per>=50)
    {
        printf("Second Division");
    }
    else if(per>=40)
    {
        printf("Third Division");
    }
    else
    {
        printf("Fail");
    }
return 0;
}
