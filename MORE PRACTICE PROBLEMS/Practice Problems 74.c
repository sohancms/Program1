#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,discriminant,root1,root2,realpart,root,imagpart;
    printf("Enter the value of a,b and c : ");
    scanf("%lf %lf %lf",&a,&b,&c);
   discriminant=b*b-4*a*c;
    if(discriminant>0)
    {
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("root1=%.2lf \n root2=%.2lf",root1,root2);
    }
    else if(discriminant==0)
    {
        root=-b/(2*a);
        printf("root1=root2= %.2lf",root);
    }
     else {
        realpart = -b / (2 * a);
        imagpart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2lf-%.2lfi", realpart, imagpart, realpart, imagpart);
    }
return 0;
}
