#include <iostream>
using namespace std;

int m = 10; // global variable

int main()
{
    int m = 20; // local variable
    {
        int k = m;
        int m = 30;
        cout << "We are in inner block" << endl;
        cout << "K = " << k << endl;
        cout << "M = " << m << endl;
        cout << "::m =" << ::m << endl;
    }
    cout << "We are in outer block" << endl;
    cout << "m = " << m << endl;
    cout << "::m = " << ::m << endl;
    return 0;
}