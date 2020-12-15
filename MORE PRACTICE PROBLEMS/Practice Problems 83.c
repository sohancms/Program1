#include <stdio.h>
int main()
{
    int mark;
    printf("Enter Your marks: ");
    scanf("%d",&mark);
    if(mark<33)
    {
        printf("Fail");
    }
    else
    {
        printf("Pass");
    }
return 0;
}
