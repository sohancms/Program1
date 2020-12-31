#include <stdio.h>
int main()
{
    while (1)
    {
        char S;
        scanf("%c", &S);
        switch (S)
        {
        case 'A':
            printf("Well done");
            break;
        case 'B':
            printf("GOOD");
            break;

        case 'C':
            printf("WEll PLayed");
            break;
        }
    }
}