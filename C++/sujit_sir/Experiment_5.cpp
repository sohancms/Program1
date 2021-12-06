#include <iostream>
using namespace std;

class Days
{
private:
    int day;

public:
    void set_days(int x);
    int year();
    int month();
    int week();
    int days();
};
void Days::set_days(int x)
{
    day = x;
}
int Days::year()
{
    return day / 365;
}
int Days::month()
{
    return (day % 365) / 30;
}
int Days::week()
{
    return ((day % 365) % 30) / 7;
}
int Days::days()
{
    return ((day % 365) % 30) % 7;
}

int main()
{
    Days obj;
    int dd;
    cout << "Enter Day :";
    cin >> dd;
    obj.set_days(dd);
    cout << "Year : " << obj.year() << endl;
    cout << "Month : " << obj.month() << endl;
    cout << "Week : " << obj.week() << endl;
    cout << "Day : " << obj.days() << endl;
    return 0;
}