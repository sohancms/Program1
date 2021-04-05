#include <iostream>
#include <list>
#include <iterator>
using namespace std;

//template <class InputIterator>
//typename iterator_traits<InputIterator>::difference_type
//distance1(InputIterator first, InputIterator last);

int main()
{
    list<int> mylist;
    for (int i = 0; i < 10; i++)
    {
        mylist.push_back(i * 10);
    }
    list<int>::iterator first = mylist.begin();
    list<int>::iterator last = mylist.end();
    cout << "The distance is = " << distance(first, last);
    return 0;
}