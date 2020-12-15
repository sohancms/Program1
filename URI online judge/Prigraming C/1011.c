#include<stdio.h>

int main()
{
    float pye= 3.14159;
    double A,B,C,p,q,r,s,t;
    scanf("%lf %lf %lf", &A, &B, &C);

    p=.5*(A*C);
    q=pye*C*C;
    r=C*(A+B)/2;
    s=B*B;
    t=A*B;

    printf("TRIANGULO: %0.3lf\n",p);
    printf("CIRCULO: %0.3lf\n",q);
    printf("TRAPEZIO: %0.3lf\n",r);
    printf("QUADRADO: %0.3lf\n",s);
    printf("RETANGULO: %0.3lf\n",t);
    return 0;

}
