#include<stdio.h>
int main()
{
    int a,b;
    double c,salary;
    scanf("%d %d %lf",&a,&b,&c);
    salary=b*c;
    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %0.2lf\n",salary);
    return 0;
}
