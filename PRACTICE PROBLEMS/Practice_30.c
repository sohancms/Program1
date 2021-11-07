#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a line of text : ");
    gets(str);
    printf("The reverse of the line is : %s ", strrev(str));
return 0;
}
