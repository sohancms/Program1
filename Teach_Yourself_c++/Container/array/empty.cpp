#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 0> arr;
    array<int, 6> arr2;
    cout << "First" << (arr.empty() ? " is empty" : "is not empty") << endl;
    cout << "Second" << (arr2.empty() ? " is empty" : "is not empty");
    return 0;
}