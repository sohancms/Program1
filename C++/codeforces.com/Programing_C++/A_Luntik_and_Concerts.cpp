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
        long long a, b, c;
        cin >> a >> b >> c;
        cout << (((a * 1) + (b * 2) + (c * 3)) % 2) << endl;
    }
    return 0;
}