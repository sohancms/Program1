#include <iostream>
using namespace std;
namespace first
{
    int x = 500;
}

namespace second
{
    double x = 4.56;
}

int main()
{
    {
        using namespace first;
        cout << x << endl;
    }

    {
        using namespace second;
        cout << x << endl;
    }
    return 0;
}