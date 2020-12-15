#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the Alphabet : ");
    scanf("%c", &ch);
    if (ch == 'A' || ch == 'a' )
    {
        printf("%c is Vowel", ch);
    }
    else if (ch == 'E' || ch == 'e' )
    {
        printf("%c is Vowel", ch);
    }
    else if (ch == 'I' || ch == 'i' )
    {
        printf("%c is Vowel", ch);
    }
    else if (ch == 'O' || ch == 'o' )
    {
        printf("%c is Vowel", ch);
    }
    else if (ch == 'U' || ch == 'u' )
    {
        printf("%c is Vowel", ch);
    }
    else
    {
        printf("%c is Consonant", ch);
    }
return 0;
}