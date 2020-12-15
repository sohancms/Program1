#include <stdio.h>
int main()
{
    char x;
    printf("Enter a small letter: ");
    x=getchar();
    printf("\nCapital letter: ");
    putchar(toupper(x));
    printf("\n");
    return 0;
}

