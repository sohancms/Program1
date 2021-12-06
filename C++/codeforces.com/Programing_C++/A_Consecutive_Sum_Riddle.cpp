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
        long long n;
        cin >> n;
        cout << (1 - n) << " " << n << endl;
    }
    return 0;
}