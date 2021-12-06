#include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum, sub, mult, mod;
    float div;
    cout << "Enter First Number : ";
    cin >> num1;

    cout << "Enter Second Number : ";
    cin >> num2;

    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    mod = num1 % num2;
    div = (float)num1 / num2;

    cout << "Sum of Number1 and Number2: " << sum << endl;
    cout << "Difference of Number1 and Nmuber2: " << sub << endl;
    cout << "Product of Number1 and Number2: " << mult << endl;
    cout << "Modulus of Number1 and Number2: " << mod << endl;
    cout << "Quotient of Number1 and Number2: " << div << endl;
    return 0;
}