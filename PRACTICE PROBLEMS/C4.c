#include <stdio.h>
int main()
{
    int row, coloum;
        for(row=1;row<=5;row++)
        {
            for(coloum=1;coloum<=row;coloum++)
            {
                printf(" *",coloum);

            }
         printf("\n\n");
        }
return 0;
}
