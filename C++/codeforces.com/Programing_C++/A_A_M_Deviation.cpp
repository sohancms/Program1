#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int diff, a, b, c;
        cin >> a >> b >> c;
        diff = abs((2 * b) - (a + c));
        (diff % 3 != 0) ? cout << '1' << endl : cout << '0' << endl;
    }
}