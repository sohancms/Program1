#include <iostream>
#include <algorithm>
using namespace std;

bool checkIsAp(int arr[], int n)
{
    if (n == 1)
    {
        return 0;
    }

    sort(arr, arr + n);
    int d = arr[1] - arr[0];
    for (int i = 2; i < n; i++)
    {
        if (arr[i] - arr[i - 1] != d)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[] = {30, 5, 10, 15, 25, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    (checkIsAp(arr, n)) ? (cout << "YES" << endl) : (cout << "NO" << endl);
    return 0;
}