#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks : ");
    scanf("%d",&marks);
    if(marks>=33 && marks<=100)
    {
        printf("Pass");
    }
    if(marks<33 && marks>=0)
    {
        printf("Fail");
    }
return 0;
}
