#include <stdio.h>

int main()
{
    int i=0;
    char str[100];
    printf("Enter your name : ");
    scanf("%s",&str);
    printf("The characters of the string with one space :\n");
    while(str[i]!='\0')
    {
       printf("%c ", str[i]);
       i++;
    }
    printf("\n");
}
