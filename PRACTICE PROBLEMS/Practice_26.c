#include <stdio.h>
int main()
{
    int n, array[1000], position;
    printf("Enter the number of element in array : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the location where delete an element :");
    scanf("%d", &position);
    if (position >= n+1)
    {
        printf("Deletion not possible.");
    }
    else
    {
        for(int i = position-1; i < n-1; i++)
        {
            array[i] = array[i+1];
        }
        printf("The resultent array is : ");
        for(int i = 0; i<n-1; i++)
        {
            printf("%d ", array[i]);
        }
    }
return 0;
}