#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> vax = {100, 50, 60, 70, 200};
    cout << "Front Element is : " << vax.front() << endl;
    cout << "Back Element is : " << vax.back() << endl;

    vax.back() = 5000;
    for (int &i : vax)
    {
        cout << i << ' ';
    }
    return 0;
}