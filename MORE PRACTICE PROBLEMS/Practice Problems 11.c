#include <stdio.h>
int main()
{
    char ch,cha;
    printf("Enter a small letter: ");
    scanf("%c",&ch);
    cha=ch-32;
    printf("\nCapital letter:%c\n",cha);
    return 0;
}
