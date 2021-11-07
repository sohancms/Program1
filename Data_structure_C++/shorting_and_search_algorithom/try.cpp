#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = ("sohancse");
    int pos = s.find("a");
    string sub1, sub2, sub3;
    sub1 = s.substr(pos + 1);
    sub2 = s.substr(0, pos);
    sub3 = s.substr(1, pos);
    cout << sub1 << "\n"
         << sub2 << "\n"
         << sub3 << "\n";
    return 0;
}