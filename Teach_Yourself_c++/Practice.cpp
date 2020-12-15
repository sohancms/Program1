#include <iostream>
using namespace std;

int main()
{
    cout << "The line show: " << __LINE__ << endl;
    cout << "The file show: " << __FILE__ << endl;
    cout << "THe date show: " << __DATE__ << endl;
    cout << "The time show: " << __TIME__ << endl;
    cout << __cplusplus << endl;
    return 0;
}