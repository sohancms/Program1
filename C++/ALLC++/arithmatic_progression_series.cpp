#include <iostream>
#include <algorithm>
using namespace std;

void printap(int a, int d, int n)
{
    int curr_term = a;
    for (int i = 1; i <= n; i++)
    {
        cout << curr_term << " ";
        curr_term = curr_term + d;
    }
}
int main()
{
    int a = 2, d = 4, n = 100;
    printap(a, d, n);
    return 0;
}