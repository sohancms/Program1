#include <bits/stdc++.h>
using namespace std;
long long s, t;

int input()
{
    string p, q, r;
    cin >> p >> q >> r;
    string s = strcat(p, q);
    s = p.size() + q.size();
    t = r.size();
}

int solve()
{
    input();
    if (s == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    solve();
    return 0;
}