#include <iostream>
using namespace std;

int main()
{
    int num1, num2, temp;
    cout << "Type value of Number 01 : " << endl;
    cin >> num1;
    cout << "Type value of Number 02 : " << endl;
    cin >> num2;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swaping value" << endl;
    cout << "Type value of Number 01: " << num1 << endl;
    cout << "Type value of Number 02: " << num2 << endl;
    return 0;
}