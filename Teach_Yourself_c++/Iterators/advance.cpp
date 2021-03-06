#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list<int> mylist;
    for (int i = 0; i < 10; i++)
    {
        mylist.push_back(i * 10);
    }
    list<int>::iterator it;
    it = mylist.begin();
    advance(it, 5);
    cout << "The six element is mylinst = " << *it << endl;
    return 0;
}