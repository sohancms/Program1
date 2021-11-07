#include <stdio.h>
int main()
{
    float marks;
    printf("Enter your marks : ");
    scanf("%f",&marks);

    if(marks>=80 && marks <=100)
        printf("Congratulation!\n\nYour gread is = A+\n\n GPA is= 5.00\n");

    else if(marks>=70 && marks <=79)
        printf("\n\nYour gread is = A\n\n GPA is= 4.00\n");

    else if(marks>=60 && marks <=69)
        printf("\n\nYour gread is = A-\n\n GPA is= 3.50\n");

    else if(marks>=50 && marks <=59)
        printf("\n\nYour gread is = B\n\n GPA is= 3.00\n");

    else if(marks>=40 && marks <=49)
        printf("\n\nYour gread is = C\n\n GPA is= 2.00\n");

    else if(marks>=33 && marks <=39)
        printf("\n\nYour gread is = D\n\n GPA is= 1.00\n");

    else
        printf("Sorry! You are Fail\n\nYour gread is = F\n\n GPA is= 0.00\n");

        return 0;
}
