#include<stdio.h>
int main()
{
    int array[1000], position , i, n, value;
    printf("Enter the number of element in array : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the location where insert an element : ");
    scanf("%d", &position);
    printf("Enter the value to insert : ");
    scanf("%d",&value);
    for ( i = n - 1; i >= position-1 ; i--)
    {
        array[i+1]=array[i];
    }
    array[position-1]=value;
    printf("Resultant array is : ");        
    for ( i = 0; i <=n; i++)
    {
        printf("%d ",array[i]);
    }
 return 0;   
}