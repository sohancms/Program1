#include<stdio.h>
int main()
{

    int  product_1, the_number_of_units_of_product_1, product_2,the_number_of_units_of_product_2;
    float p1,p2,VAP;
    scanf("%d%d%f",&product_1,&the_number_of_units_of_product_1,&p1);
    scanf("%d%d%f",&product_2,&the_number_of_units_of_product_2,&p2);
    VAP = (the_number_of_units_of_product_1*p1)+(the_number_of_units_of_product_2*p2);
    printf("VALOR A PAGAR: R$ %.2f\n",VAP);
    return 0;
}
