//adjacent_find example...
#include <iostream>  //std::cout
#include <vector>    //std::vector
#include <algorithm> //std:: adjacent_find
using namespace std;
bool myfunction(int i, int j)
{
    return (i == j);
}
int main()
{
    int myints[] = {5, 20, 5, 30, 30, 20, 10, 10, 20};
    vector<int> myvector(myints, myints + 8);
    vector<int>::iterator it;
    it = adjacent_find(myvector.begin(), myvector.end()); //using defalt comparison
    if (it != myvector.end())
    {
        cout << "The first pair of repeated elements are: " << *it << '\n';
    }
    it = adjacent_find(++it, myvector.end(), myfunction); //using predicate comparison
    if (it != myvector.end())
    {
        cout << "The second pair of repeated elements are: " << *it << '\n';
    }
    return 0;
}