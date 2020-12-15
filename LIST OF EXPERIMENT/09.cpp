#include <iostream>
using namespace std;

int main()
{
    char letter;
    cout << "Enter a character : ";
    cin >> letter;
    cout << "ANSCI Value of character : " << letter << "=" << int(letter);
    return 0;
}