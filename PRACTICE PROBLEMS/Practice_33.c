#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter the text of a line : ");
    gets(str);
    printf("The upper string is : %s", strupr(str));
getch();
return 0;
}
