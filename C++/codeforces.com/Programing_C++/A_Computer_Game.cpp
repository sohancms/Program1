#include <iostream>
#include <string>
using namespace std;

bool flag(int n, string s1, string s2)
{
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == '1' && s2[i] == '1')
        {
            return false;
            break;
        }
    }
    return true;
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
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        flag(n, s1, s2) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}