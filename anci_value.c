#include <stdio.h>

int main()
{
    char ch;
    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        printf(" %c = %d ", ch, ch);
    }
    printf("\n\n");
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        printf(" %c = %d ", ch, ch);
    }
    printf("\n\n");

    return 0;
}
