#include <iostream>
using namespace std;

template <class myTemplate>
myTemplate add(myTemplate a, myTemplate b)
{
    return a + b;
}

template <class myTemplate>
myTemplate sub(myTemplate a, myTemplate b)
{
    return a - b;
}

template <class myTemplate>
myTemplate mul(myTemplate a, myTemplate b)
{
    return a / b;
}

template <class myTemplate>
myTemplate mul(myTemplate a, myTemplate b)
{
    return a * b;
}

int main()
{
    cout << add(10, 20) << endl;
    cout << sub(100.5, 20.2) << endl;
    cout << mul(50, 5) << endl;
    return 0;
}