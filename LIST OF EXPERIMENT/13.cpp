#include <iostream>
#define MAX_SIZE 100
using namespace std;

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    char *s1 = str1;
    char *s2 = str2;
    cout << "Enter First string : ";
    cin >> str1;

    cout << "Enter Second string : ";
    cin >> str2;

    while (*(++s1))
        ;

    while (*(s1++) = *(s2++))
        ;

    cout << "Concatenated string : " << str1;
    return 0;
}
