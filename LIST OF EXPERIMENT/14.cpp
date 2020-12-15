#include <iostream>
#define MAX_SIZE 100
using namespace std;

int main()
{
    char test[MAX_SIZE];
    char *str = test;
    int count = 0;
    cout << "Enter any string : ";
    cin >> test;
    while (*(str++) != '\0')
        count++;
    cout << "Length of " << test << " is : " << count;
    return 0;
}