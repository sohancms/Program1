#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 5, 6, 3, 4, 8, 9, 47, 5, 4, 6, 5, 2};
    vector<int>::iterator it;
    for (it = v1.begin(); it != v1.end(); it++)
    {
        cout << " " << *it;
    }
    return 0;
}