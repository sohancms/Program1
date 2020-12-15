#include <stdio.h>
int main()
{
    int row, coloum, null;
    for(row=1;row<=5;row++)
    {
        for(null=4;null>=row;null--)
        {
            printf("  ",null);
        }
        for(coloum=1;coloum<=row;coloum++)
        {
            printf(" *",coloum);
        }
    printf("\n\n");
    }
return 0;
}
