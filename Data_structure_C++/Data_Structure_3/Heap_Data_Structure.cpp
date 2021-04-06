//Max-Heap data structure in c++
#include <iostream>
#include <vector>
using namespace std;
void insert(vector<int> &hT, int newnumber)
{
    int size = ht.size();
    if (size == 0)
    {
        ht.push_back(newnumber);
    }
    else
    {
        ht.push_back(newnumber);
        for (int i = size / 2 - 1; i >= 0; i--)
        {
            heapify(ht, i);
        }
    }
}

int main()
{
    vector<int> heaptree;
    insert(heaptree, 3);
    insert(heaptree, 10);
    insert(heaptree, 5);
    insert(heaptree, 5);
    insert(heaptree, 2);
}