#include <stdio.h>
int main()
{
    int DD, MM, YYYY;
    printf("Enter the date : ");
    scanf("%d %d %d", &DD, &MM, &YYYY);
    printf("DD-MM-YYYY : %d-%d-%d", DD, MM, YYYY);
    printf("\nDD/MM/YYYY : %d/%d/%d", DD, MM, YYYY);
    printf("\nDD MM YYYY : %d %d %d", DD, MM, YYYY);
    printf("\nDD,MM,YYYY : %d,%d,%d", DD, MM, YYYY);
    return 0;
}