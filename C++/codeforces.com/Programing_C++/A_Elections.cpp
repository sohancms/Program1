
#include <iostream>
using namespace std;

int max(int p, int q, int r)
{
    if (p >= q && p >= r)
    {
        return p;
    }
    else if (q >= p && q >= r)
    {
        return q;
    }
    else
    {
        return r;
    }
}

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
        cout << max(a, b + 1, c + 1) - a << " " << max(a + 1, b, c + 1) - b << " " << max(a + 1, b + 1, c) - c << endl;
    }
    return 0;
}