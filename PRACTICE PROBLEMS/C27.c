#include <stdio.h>
int main()
{
    int i, j, n, a[20], temp;
    printf("Enter the vale of array :\n");
    scanf("%d",&n);
    printf("Enter the integers :\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The ascending order is:\n");
    for(i=0; i<n; i++)
    {
        printf("%4d",a[i]);
    }
return 0;
}
