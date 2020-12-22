#include <iostream>
using namespace std;

namespace first
{
    int x = 5;
    int y = 10;
} // namespace first

namespace second
{
    double x = 3.14156;
    double y = 2.7183;
} // namespace second

int main()
{
    using namespace first;
    cout << x << endl;
    cout << y << endl;
    cout << first::x << endl;
    cout << second::y << endl;
    return 0;
}