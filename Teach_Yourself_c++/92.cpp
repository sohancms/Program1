#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        try
        {
            long int num1, num2;
            cout << "Enter 1st number : ";
            cin >> num1;
            cout << "Enter 2nd number : ";
            cin >> num2;
            if (num2 == 0)
            {
                throw -1;
            }
            double result = (double)num1 / num2;
            cout << "result :" << result << endl;
        }
        catch (...)
        {
            cout << "Devide by zero is not possible.plz try again";
        }
        /* code */
    }

    return 0;
}