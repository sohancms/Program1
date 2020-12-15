#include<stdio.h>
int main()
{
    int day, month, year;
    char*Month[]= { "JANUARY", "FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
    printf("Enter date(DD/MM/YYYY) : ");
    scanf("%d %d %d", &day, &month, &year);
    printf("Day: %d",day);
    if(day==1 || day==21 || day==31)
    {
        printf("st.");
    }
    else if(day == 2 || day == 22 )
    {
        printf("nd.");
    }
    else if(day == 3 || day== 23)
    {
        printf("rd.");
    }
    else
    {
        printf("th.");
    }
    printf("\n");
    printf("Month : %s",Month[month-1]);
    printf("\nYear : %d",year);
    printf("\n");
return 0;
}