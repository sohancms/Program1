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
        string n;
        cin >> n;
        if ((n[n.size() - 1] - 48) % 2 == 0)
        {
            cout << 0 << endl;
            continue;
        }
        if ((n[0] - 48) % 2 == 0)
        {
            cout << 1 << endl;
            continue;
        }
        int k = -1;
        for (int i = 0; i < n.size(); i++)
        {
            if ((n[i] - 48) % 2 == 0)
            {
                k = 2;
                break;
            }
        }
        cout << k << endl;
    }
    return 0;
}