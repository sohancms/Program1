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
        long long a, b;
        cin >> a >> b;
        cout << min(((a + b) / 4), min(a, b)) << endl;
    }
    return 0;
}