#include <iostream>
using namespace std;

int main()
{
    float celcious, fahrenheit;
    cout << "Enter temperature in celcious : ";
    cin >> celcious;
    fahrenheit = 32 + (9 * celcious) / 5;
    cout << "Temperature in Farenheit : " << fahrenheit << endl;
    return 0;
}