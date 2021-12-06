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
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (i % 2 == 0)
            {
                (s[i] == 'a') ? cout << 'b' : cout << 'a';
            }
            else
            {
                (s[i] == 'z') ? cout << 'y' : cout << 'z';
            }
        }
        cout << endl;
    }
    return 0;
}