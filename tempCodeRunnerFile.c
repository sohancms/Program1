#include <stdio.h>
int main()
{
    int row, column, p, q, m, n, k, tot = 0;
    int fst[10][10], sec[10][10], mul[10][10];
    printf("Please insert the number of rows and columns for first matrix \n");
    scanf("%d%d", &m, &n);
    printf("Please insert the number of rows and columns for second matrix\n");
    scanf("%d%d", &p, &q);
    if (n != p)
        printf("Your given matrices cannot be multiplied with each other. \n");
    else
    {
        printf("Insert your elements for first matrix \n");
        for (row = 0; row < m; row++)
            for (column = 0; column < n; column++)
                scanf("%d", &fst[row][column]);
        printf("Insert your elements for second matrix \n");
        for (row = 0; row < p; row++)
            for (column = 0; column < q; column++)
                scanf("%d", &sec[row][column]);
        for (row = 0; row < p; row++)
        {
            for (column = 0; column < q; column++)
            {
                for (k = 0; k < p; k++)
                {
                    tot = tot + fst[row][k] * sec[k][column];
                }
                mul[row][column] = tot;
                tot = 0;
            }
        }
        printf("The result of matrix multiplication or product of the matrices is: \n");
        for (row = 0; row < m; row++)
        {
            for (column = 0; column < n; column++)
                printf("%d \t", mul[row][column]);
            printf(" \n ");
        }
    }
    return 0;
}