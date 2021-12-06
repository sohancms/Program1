#include <iostream>
using namespace std;

int main()
{
    int choice, asci;
    float feet, meter, celcious, farenheit;
    cout << "1.Feet to Meter." << endl
         << "2.Meter to Feet." << endl
         << "3.celcious to farenheit." << endl
         << "4.Farenheit to Celcious." << endl
         << "5.Character to ASCII." << endl
         << "6.ASCII to Character." << endl
         << "Enter 0 for Terminate." << endl;
    while (1)
    {
        cout << "Enter Your Choice : ";
        cin >> choice;
        if (choice == 0)
        {
            cout << "Program is terminated" << endl;
            break;
        }
        else
        {
            switch (choice)
            {
            case 1:
                cout << "Enter value in Feet : ";
                cin >> feet;
                meter = feet / float(3);
                cout << "The value of Meter is :" << meter << endl;
                break;
            case 2:
                cout << "Enter value in Meter :";
                cin >> meter;
                feet = meter * 3;
                cout << "The value of Feet is : " << feet << endl;
                break;
            case 3:
                cout << "Enter Temperature is Celcious :";
                cin >> celcious;
                farenheit = ((9 * celcious) / 5) + 32;
                cout << "Farenheit temperature is : " << farenheit << endl;
                break;
            case 4:
                cout << "Enter Temperarture in Farenheit:";
                cin >> farenheit;
                celcious = (((farenheit - 32) * 5) / 9);
                cout << "Celcious Temperature is : " << celcious << endl;
                break;
            case 5:
                cout << "Enter a Character :";
                char ch;
                cin >> ch;
                cout << "ASCII value :" << int(ch) << endl;
                break;
            case 6:
                cout << "Enter ASCII value:";
                cin >> asci;
                cout << "Character is :" << char(asci) << endl;
                break;
            default:
                cout << "Wrong choice" << endl;
                break;
            }
        }
    }
    return 0;
}