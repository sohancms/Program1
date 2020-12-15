#include <stdio.h>
int main()
{
    char x;
    printf("Enter a Capital letter: ");
    x=getchar();
    printf("\nSmall letter: ");
    putchar(tolower(x));
    printf("\n");
    return 0;
}


