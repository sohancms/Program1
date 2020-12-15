#include <iostream>
using namespace std;

int main()
{
    float C, F;
    cout << "Enter the temperature in Farenheit : ";
    cin >> F;
    C = (5 * (F - 32)) / 9;
    cout << "The temperature in Celcious : " << C << endl;
    return 0;
}