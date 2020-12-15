#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("Leap year");
    }

    else
    {
        printf("is not Leap year");
    }
return 0;
}
