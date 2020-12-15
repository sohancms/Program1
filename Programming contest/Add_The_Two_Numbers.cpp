#include <iostream>
using namespace std;

int main()
{
    int T, A, B, sum = 0;
    cin >> T;
    while (T--)
    {
        cin >> A >> B;
        sum = A + B;
        cout << sum << endl;
    }
    return 0;
}