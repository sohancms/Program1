#include <iostream>
using namespace std;

void solve()
{
    string a, b, out;
    cin >> a >> b;
    for (int i = 0; i <= a.size(); i++)
    {
        if ((a[i] == '0' && b[i] == '0') || (a[i] == '1' && b[i] == '1'))
        {
            cout << '0';
        }
        else if ((a[i] == '0' && b[i] == '1') || (a[i] == '1' && b[i] == '0'))
        {
            cout << '1';
        }
    }
}

int main()
{
    solve();
    return 0;
}