#include <iostream>
using namespace std;

void solve()
{
    int n, h, count1 = 0, count2 = 0;
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a <= h)
        {
            count1++;
        }
        else
        {
            count2 = count2 + 2;
        }
    }
    int result = count1 + count2;
    cout << result << endl;
}

int main()
{
    solve();
    return 0;
}