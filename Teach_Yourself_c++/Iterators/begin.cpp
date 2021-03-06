#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> bar = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    vector<int>::iterator it;
    for (it = bar.begin(); it != bar.end(); it++)
    {
        cout << " " << *it;
    }
    int n;
    vector<int> foo;
    for (int i = 0; i <= 4; i++)
    {
        foo.push_back(i);
    }
    for (vector<int>::iterator it = foo.begin(); it != foo.end(); it++)
    {
        cout << " " << *it << endl;
    }
    return 0;
}