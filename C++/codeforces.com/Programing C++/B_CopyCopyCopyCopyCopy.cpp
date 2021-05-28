#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
    ll Test, count = 1;
    cin >> Test;
    while (Test--)
    {
        ll T, count = 0;
        cin >> T;
        ll arr[T];
        for (int i = 0; i < T; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + T);
        for (int i = 1; i <= T; i++)
        {
            if (arr[i - 1] != arr[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}