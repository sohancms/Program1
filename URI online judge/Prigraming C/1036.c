#include <stdio.h>
#include <math.h>
int main()
{
   double A, B, C, x1, x2;
     scanf("%lf %lf %lf",&A, &B, &C);
         x1=((-B+sqrt((B*B)-4*A*C))/(2*A));
        x2=((-B-sqrt((B*B)-4*A*C))/(2*A));
     if(A!=0 && ((B*B)-4*A*C)>0)
     {
        printf("R1 = %.5lf\nR2 = %.5lf\n",x1,x2);
     }
   else
   {
       printf("Impossivel calcular\n");
   }
    return 0;

}
