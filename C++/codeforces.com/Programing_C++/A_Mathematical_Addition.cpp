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
        long long u, v, x, y;
        cin >> u >> v;
        x = -1 * u * u;
        y = v * v;
        cout << x << " " << y << endl;
    }
    return 0;
}