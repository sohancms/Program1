#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, j, len, startIndex, endIndex;
    printf("\n Please Enter any String : ");
    gets(str);
    len = strlen(str);
    for (i = 0; i < len; i++)
        printf("%c ", str[i]);
    printf("\n");
    return 0;
}
