#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

template <class Container>
back_insert_iterator<Container> back_inserter1(Container &x)
{
    return back_insert_iterator<Container>(x);
}

int main()
{
    vector<int> var, foo;
    for (int i = 1; i <= 5; i++)
    {
        foo.push_back(i);
        var.push_back(i * 10);
    }
    copy(var.begin(), var.end(), back_inserter1(foo));
    cout << "Foo container : " << endl;
    for (vector<int>::iterator it = foo.begin(); it != foo.end(); it++)
    {
        cout << " " << *it;
    }
    cout << endl;
    return 0;
}