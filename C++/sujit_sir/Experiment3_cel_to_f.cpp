#include <iostream>
using namespace std;
class temp
{
public:
    float cel;
    float far;

    void setcel(float a);
    void setfar(float b);
    float getcel_to_far();
    float getfar_to_cel();
};

void temp::setcel(float a)
{
    cel = a;
}

void temp::setfar(float b)
{
    far = b;
}

float temp::getcel_to_far()
{
    return ((9 * cel) / 5) + 32;
}

float temp::getfar_to_cel()
{
    return (((far - 32) * 5) / 9);
}

int main()
{
    float c, f;
    cout << "Enter the temperature celcious and farenheit :";
    cin >> c >> f;
    temp obj;
    obj.setcel(c);
    obj.setfar(f);

    cout << "Farenheit temperature is : " << obj.getcel_to_far() << endl;
    cout << "Celcious temperature is : " << obj.getfar_to_cel() << endl;

    return 0;
}