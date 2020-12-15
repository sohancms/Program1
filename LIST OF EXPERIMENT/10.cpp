#include <iostream>
#define PI 3.1416
using namespace std;

int main()
{
    float radious, area;
    cout << "Ente Radious : ";
    cin >> radious;
    area = PI * radious * radious;
    cout << "The area of the cyrcle : " << area << endl;
    return 0;
}