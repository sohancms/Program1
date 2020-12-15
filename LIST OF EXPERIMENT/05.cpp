#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int sum, sub, module, mult;
    float div;
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;
    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    module = num1 % num2;
    div = (float)num1 / num2;
    cout << "Sum of number1 and number2 : " << sum << endl;
    cout << "Difference of number1 and number2 :" << sub << endl;
    cout << "multiplication of number1 and number2 : " << mult << endl;
    cout << "Modules of number1 and number2 : " << module << endl;
    cout << "Quotient of number1 and number2 : " << div << endl;
    return 0;
}