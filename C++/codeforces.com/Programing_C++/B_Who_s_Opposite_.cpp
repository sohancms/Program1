#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test;
    cin >> test;
    while (test--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int d = abs(a - b);
        if (c > d)
        {
            cout << "-1" << endl;
        }
        else if (c < d)
        {
            cout << (c - d) << endl;
        }
        else if (c <= 2 * d)
        {
            cout << (c + d) << endl;
        }
    }
    return 0;
}