#include <stdio.h>
int main()
{
    int row, coloum;
    for(row=5; row>=1;row--)
    {
        for(coloum=1;coloum<=row;coloum++)
        {
            printf(" %d",coloum);
        }
        printf("\n\n");

    }
return  0;
}
