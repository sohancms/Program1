#include <stdio.h>
int main()
{
    int Year;
    printf("Enter the year : ");
    scanf("%d",&Year);
    if((Year%400==0) || ((Year%100!=0) &&(Year%4==0)) )
    {
        printf("Leap year");
    }
    else
    {
        printf("Not Leap year");
    }
return 0;
}
