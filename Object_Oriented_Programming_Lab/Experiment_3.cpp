#include <iostream>
using namespace std;

int main()
{
    int num1, num2, temp;
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "\nEnter the second number : ";
    cin >> num2;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After swapping values" << endl;

    cout << "Value of number 1 is : " << num1 << endl;

    cout << "Value of number 2 is : " << num2 << endl;
    return 0;
}