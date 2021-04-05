#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 4> odd_number = {13, 5, 6, 7};
    for (int i : odd_number)
    {
        cout << " " << i; //print odd number
    }
    for (int i = 0; i < 4; i++)
    {
        cout << ' ' << odd_number[i]; //print odd number
    }

    array<int, 6> arr;
    return 0;
}