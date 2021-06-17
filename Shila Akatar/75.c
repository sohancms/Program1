#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main()
{
    system("cls");
    float r, area;
    printf("Enter the value of r: ");
    scanf("%f",&r);
    area=3.1416*r*r;
    printf("Area = %.2f",area);
getch();
return 0;
}
