#include <stdio.h>
int main()
{
    int medical=500;
    float basic, house_rent, salary;
    printf("Enter the amount of basic:\n");
    scanf("%f",&basic);
    if(basic<=0 || basic>=7200.00)
        printf("Re-enter basic\n");
    else
    {
        if(basic<=1200.00)
            house_rent=900.00;
        else if(basic>1200.00 && basic<=4800.00)
            house_rent=basic*.45;
        else
            house_rent=basic*.40;
        salary= basic+house_rent+medical;
        printf("\n Salary %6.2f",salary);
    }

return 0;
}
