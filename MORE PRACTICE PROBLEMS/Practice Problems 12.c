#include <stdio.h>
int main()
{
    char ch,cha;
    printf("Enter a Capital letter: ");
    scanf("%c",&ch);
    cha=ch+32;
    printf("\nSmall letter:%c\n",cha);
    return 0;
}

