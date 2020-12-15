#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks : ");
    scanf("%d",&marks);
    if(marks>=80 && marks<=100)
    {
        printf("Your GPA is 5.00 \nGread is : A+");
    }

    else if(marks>=70 && marks<=79)
    {
        printf("Your GPA is 4.00 \nGread is : A");
    }

    else if(marks>=60 && marks<=69)
    {
        printf("Your GPA is 5.00 \nGread is : A-");
    }

    else if(marks>=50 && marks<=59)
    {
        printf("Your GPA is 5.00 \nGread is : B");
    }

    else if(marks>=40 && marks<=49)
    {
        printf("Your GPA is 5.00 \nGread is : C");
    }

    else if(marks>=33 && marks<=39)
    {
        printf("Your GPA is 5.00 \nGread is : D");
    }
    else
    {
        printf("Sorry! you are fail in the exam.");
    }
return 0;
}
