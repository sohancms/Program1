#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row, coloum, coloum1, n, A[5][5], B[5][5], mul[5][5];
    printf("Enter the order of matrix :\n");
    scanf("%d",&n);
    printf("Enter the value of A: \n\n");
    for( row = 0; row < n; row++)
    {
        for( coloum = 0; coloum < n; coloum++)
        {
            scanf("%d",&A[row][coloum]);
        }
    }

     printf("Enter the value of B: \n\n");
    for( row = 0; row < n; row++)
    {
        for( coloum = 0; coloum < n; coloum++)
        {
            scanf("%d",&B[row][coloum]);
        }
    }
    for( row = 0; row < n; row++)
    {
        for( coloum = 0; coloum < n; coloum++)
        {
            mul[row][coloum] = 0;
            for( coloum1 = 0; coloum1 < n; coloum1++)
            {
                mul[row][coloum] += A[row][coloum1] * B[coloum1][coloum];
            }
        }
    }

    printf("The matrix A is:\n\n");
    for( row = 0; row < n; row++)
    {
        for( coloum = 0; coloum < n; coloum++)
        {
            printf("%4d",A[row][coloum]);
        }
        printf("\n\n");
    }

    printf("\n\n");
    printf("The matrix B is:\n\n");
    for( row = 0; row < n; row++)
    {
        for( coloum = 0; coloum < n; coloum++)
        {
            printf("%4d",B[row][coloum]);
        }
        printf("\n\n");
    }

    printf("\n\n");
    printf("The multiplication resultant matrix  is:\n\n");
    for( row = 0; row < n; row++)
    {
        for( coloum = 0; coloum < n; coloum++)
        {
            printf("%4d",mul[row][coloum]);
        }
        printf("\n\n");
    }
return 0;
}