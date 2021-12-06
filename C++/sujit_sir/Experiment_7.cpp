#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, row, coloum, c, n;
    cout << "Enter the limit: ";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        a = 0;
        b = 1;
        cout << b << "\t";
        for (coloum = 1; coloum <= row; coloum++)
        {
            c = a + b;
            cout << c << "\t";
            a = b;
            b = c;
        }
        cout << "\n";
    }
    return 0;
}