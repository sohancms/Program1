#include <iostream>
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        if (n % 2 == 1 || s[n - 1] == '(' || s[0] == ')')
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}

int main()
{
    solve();
}