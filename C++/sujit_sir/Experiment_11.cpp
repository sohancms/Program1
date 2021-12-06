#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter marks obtained : ";
    cin >> marks;
    switch (marks / 10)
    {
    case 10:
    case 9:
         cout << "Your Gread is A+" << endl;
        break;
    case 8:
        cout << "Your Gread is A-" << endl;
        break;
    case 7:
        cout << "Your Gread is B" << endl;
        break;
    case 6:
        cout << "Your Gread is B-" << endl;
        break;
    case 5:
        cout << "Your Gread is C+" << endl;
        break;
    case 4:
        cout << "Your Gread is C" << endl;
        break;
    default:
        cout << "Your Gread is F" << endl;
    }
    system("pause");
    return 0;
}