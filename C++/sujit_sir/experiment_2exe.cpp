#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, d, n;
    float result = 0;
    cout << "1.Exp1 = a/b + a*b*c + a%b" << endl;
    cout << "2.Exp2 = pow(a,b) + sqrt(b) + abs(-c) + a*b" << endl;
    cout << "3.Exp3 = a%c + a/b - a*b/c + pow(c*d)" << endl;

    while (1)
    {
        cout << "Enter Your Choice: ";
        cin >> n;
        if (n >= 1 && n <= 2)
        {
            cout << "Enter the value of a,b,c : ";
            cin >> a >> b >> c;
        }
        else if (n == 3)
        {
            cout << "Enter the value of a,b,c,d : ";
            cin >> a >> b >> c >> d;
        }
        else
        {
            cout << "Please Reenter" << endl;
        }

        switch (n)
        {
        case 1:
            result = (float)(a / b) + (a * b * c) + (a % b);
            cout << "Total of Exp1 = " << result << endl;
            break;
        case 2:
            result = pow(a, b) + sqrt(b) + abs(-c) + (a * b);
            cout << "Total of Exp2=" << result << endl;
            break;
        case 3:
            result = (a % b) + (float)(a / b) - (float)((a * b) / c) + pow(c, d);
            cout << "Total of Exp3=" << result << endl;
            break;
        default:
            cout << "None of This" << endl;
            break;
        }
    }
    return 0;
}