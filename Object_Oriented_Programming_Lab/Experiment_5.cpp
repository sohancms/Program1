#include <iostream>
using namespace std;

int main()
{
    float celcious, farenheit;
    cout << "Enter the temperature in Celcious : ";
    cin >> celcious;
    farenheit = ((9 * (celcious)) / 5) + 32;
    cout << "Temperature ini Fahrenheit : " << farenheit << endl;
    return 0;
}