#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int x, y;
        cin >> x >> y;
        if ((x + y) % 2 != 0)
        {
            cout << "-1 -1" << endl;
        }
        else
        {
            cout << x / 2 << " " << (y + 1) / 2 << endl;
        }
    }
    return 0;
}