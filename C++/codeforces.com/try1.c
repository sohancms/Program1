#include <stdio.h>
int main()
{
    int result;
    printf("Enter your Marks : ");
    scanf("%d", &result);
    result > 40 ? puts("Pass") : puts("Fail");
    puts(result > 80 ? "Gread A+" : "Gread A-");
}