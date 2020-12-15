#include <iostream>
using namespace std;

class Crectangular
{
private:
    int width, height;

public:
    void set_values(int, int) int area()
    {
        return (width * height);
    }
    friend Crectangular duplicate(Crectangular);
};

void Crectangular::set_values(int a, int b)
{
    width = a;
    height = b;
}

Crectangular duplicate(Crectangular rectparam)
{
    Crectangular rectparam;
    rectparam.width = rectparam.width * 4;
    rectparam.height = rectparam.height * 5;
    return (rectparam);
}

int main()
{
    Crectangular rect, rectb;
    rect.set_values(2, 3);
    rectb = duplicate(rect);
    cout << rectb.area();
    return 0;
}