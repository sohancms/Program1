#include <iostream>
using namespace std;

int main()
{
    int age, Days, Month, Year;
    cin >> age;
    Year = (age / 365);
    Month = ((age - (365 * Year)) / 30);
    Days = age - ((Year * 365) + (Month * 30));
    cout << Year << " Year" << endl;
    cout << Month << " Month" << endl;
    cout << Days << " Days" << endl;
    return 0;
}