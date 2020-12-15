#include <stdio.h>
int main()
{
    int row, coloum, null;
    for(row=5; row>=1; row--)
    {
        {
        for(coloum=1; coloum<=row;coloum++)
        {
            printf(" *",coloum);
        }
         printf("\n\n");
        }
        for(null=5; null>=row; null--)
        {
            printf("  ",null);
        }
    }
return 0;
}
