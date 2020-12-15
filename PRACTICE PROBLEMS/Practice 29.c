#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter the text of a line : ");
    gets(str);
    printf("\nThe length of the string line is : %d", strlen(str));
getch();
return 0;
}