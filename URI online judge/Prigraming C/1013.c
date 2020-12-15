#include <stdio.h>
int main()
{
    int a,b,s,Maior_ab;
    scanf("%d,%d,%D",&a, &b, &s);
    Maior_ab=(.5*(a+b+abs(a-b)));
    printf("%d eh o maior",Maior_ab);
    return 0;
}
