#include <iostream>
using namespace std;

void solve()
{
    long long int t, total_chocklate = 0;
    cin >> t;
    while (t--)
    {
        cin >> total_chocklate;
        if (total_chocklate > 2)
        {
            long long int count = 0;
            long long int div = (total_chocklate) / 2;
            for (div; div < (total_chocklate - 1); div++)
            {
                count++;
            }
            cout << count << endl;
        }
        else
        {
            cout << '0' << endl;
        }
    }
}

int main()
{
    solve();
}