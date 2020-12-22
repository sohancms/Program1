#include <iostream>
using namespace std;

namespace first
{
    int x = 40;
    int y = 50;
} // namespace first

namespace second
{
    double x = 4.25;
    double y = 4.08;
} // namespace second

int main()
{
    using first::x;
    using second::y;
    cout << x << endl;
    cout << y << endl;
    cout << second::x << endl;
    cout << first::y << endl;
    return 0;
}