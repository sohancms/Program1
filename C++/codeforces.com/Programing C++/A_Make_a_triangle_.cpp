#include <iostream>
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b < c)
    {
        cout << (c + 1) - (a + b);
    }
    else if (b + c < a)
    {
        cout << (a + 1) - (b + c);
    }
    else if (c + a < b)
    {
        cout << (b + 1) - (c + a);
    }
    else if (a + b == c || b + c == a || c + a == b)
    {
        cout << '1';
    }
    else
    {
        cout << '0';
    }
}

int main()
{
    solve();
    return 0;
}