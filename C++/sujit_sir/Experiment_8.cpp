#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';
    int row, space, coloum, m;
    for (int row = 1; row <= 5; row++)
    {
        for (space = 5; space >= row; space--)
        {
            cout << " ";
        }
        for (int coloum = 1; coloum <= row; coloum++)
        {
            cout << ch++;
        }
        ch--;
        for (m = 1; m < row; m++)
        {
            cout << --ch;
        }
        cout << "\n";
        ch = 'A';
    }
    return 0;
}