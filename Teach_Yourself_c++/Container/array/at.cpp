#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> myarray = {10, 20, 30, 40, 50};
    cout << myarray.at(3) << endl; // print the possition number of 3 element
    array<int, 10> arr;
    for (int i = 0; i < 10; i++)
    {
        arr.at(i) = i + 1;
        cout << ' ' << arr.at(i);
    }
    return 0;
}