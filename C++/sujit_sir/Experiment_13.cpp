#include <iostream>
using namespace std;

int main()
{
    int i, n, result = 0;
    cout << "Enter any Number : ";
    cin >> n;
    for (i = 1; i <= n; ++i)
    {
        result += i * (i + 1);
        cout << i << "*" << i + 1;
        (i < n) ? cout << "+" : cout << " ";
    }
    cout << endl;
    cout << "Sum of the series = " << result;
    return 0;
}