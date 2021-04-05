#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 10> arr = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    cout << "My array container : ";
    for (auto it = arr.crbegin(); it != arr.crend(); it++)
    {
        cout << ' ' << *it;
    }
    return 0;
}