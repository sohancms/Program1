#include <iostream>
using namespace std;

int linear_search(int a[], int n, int x) //create a linearn_search function..
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return i;
        }
    }
    i = -1;
    return i;
}

int main()
{
    int a[5] = {10, 20, 32, 25, 50};
    int x = 32;
    int n = sizeof(a) / sizeof(a[0]);
    int result = linear_search(a, n, x); //result is here indicate the index number..
    if (result == -1)
    {
        cout << "Element not found in the text" << endl;
    }
    else
    {
        cout << "Element found in the text " << result << endl;
    }
    (result == -1) ? cout << "NO" : cout << "YES " << result;
    return 0;
}