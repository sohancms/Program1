#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        printf(" %c = %d ", ch, ch);
    }

    return 0;
    getch();
}
