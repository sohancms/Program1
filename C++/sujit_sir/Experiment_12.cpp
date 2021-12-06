#include <iostream>
using namespace std;

class abc
{
public:
    static int a;
    int b;
    void fun()
    {
        cout << ++a << " " << ++b << endl;
    }
    abc()
    {
        b = 0;
    }
};

int abc::a;

int main()
{
    abc obj1, obj2;
    obj1.fun();
    obj1.fun();
    obj2.fun();
    return 0;
}