#include <iostream>
using namespace std;

int main()
{
    int days, years, week;
    cout << "Enter days : ";
    cin >> days;
    years = days / 365;
    week = (days % 365) / 7;
    days = days - ((years * 365) + (week * 7));
    cout << years << endl;
    cout << week << endl;
    cout << days << endl;
    return 0;
}