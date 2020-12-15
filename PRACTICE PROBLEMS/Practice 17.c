#include <stdio.h>

int main()
{
    int number;
    printf("Enter the Number : ");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("%d is Even",number);
    }
    else
        printf("%d is odd",number);

return 0;
}
