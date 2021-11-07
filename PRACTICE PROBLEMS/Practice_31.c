#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    printf("Enter the first line : ");
    gets(str1);
    printf("Enter the second line : ");
    gets(str2);
    strcpy(str1,str2);
    printf("\n\nAfter copy the string : \n");
    printf("\nThe first line : %s",str1);
    printf("\nThe second line : %s",str2);
    getch();
return 0;
}
