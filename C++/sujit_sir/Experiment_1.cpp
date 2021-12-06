#include <iostream>
using namespace std;

int main()
{
    cout << "1.for_loop" << endl;
    cout << "2.while_loop" << endl;
    cout << "3.do_while_loop" << endl;

    int n, p;
    cout << "Enter Your Choice : ";
    cin >> n;
    if (1 <= n && n <= 3)
    {
        switch (n)
        {
        case 1:
            cout << "for_loop_is_running" << endl;
            cin >> p;
            for (int i = 0; i < p; i++)
            {
                cout << "BSFMSTU" << endl;
            }
            break;
        case 2:
            cout << "while_loop_is_running" << endl;
            cin >> p;
            while (p--)
            {
                cout << "BSFMSTU" << endl;
            }
            break;
        case 3:
            cout << "do_while_loop_is_running" << endl;
            cin >> p;
            do
            {
                p--;
                cout << "BSFMETU" << endl;
            } while (p > 0);
            break;
        default:
            cout << "None Of this" << endl;
            break;
        }
    }
    else
    {
        cout << "None Of this" << endl;
    }
    return 0;
}