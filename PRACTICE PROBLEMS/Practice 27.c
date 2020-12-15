#include<stdio.h>
int main()
{
    int n, array[1000], search, i;
    printf("Enter the number of element in array : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter a number to search : ");
    scanf("%d", &search);
    for(i=0; i<n; i++)
    {
        if(array[i]==search)
        {
            printf("%d is present at the location %d", search, i+1);
        break;
        }
    }
    if (i == n)
    {
        printf("\n%d isn't present int the array.", search);
    }
return 0;
}