//Max-Heap data structure in c++
#include <iostream>
#include <vector>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

void heapify(vector<int> &ht, int i)
{
    int size = ht.size();
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < size && ht[l] > ht[largest])
    {
        largest = l;
    }
    if (r < size && ht[r] > ht[largest])
    {
        largest = r;
    }
    if (largest != i)
    {
        swap(&ht[i], &ht[largest]);
        heapify(ht, largest);
    }
}
void insert(vector<int> &ht, int newnumber)
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

void deleteNode(vector<int> &ht, int num)
{
    int size = ht.size();
    int i;
    for (i = 0; i < size; i++)
    {
        if (num == ht[i])
        {
            break;
        }
    }
    swap(&ht[i], &ht[size - 1]);
    ht.pop_back();
    for (int i = 0; i < size / 2 - 1; i--)
    {
        heapify(ht, i);
    }
}

void printArray(vector<int> &ht)
{
    for (int i = 0; i < ht.size(); ++i)
    {
        cout << ht[i] << " ";
    }
    cout << "\n";
}

int main()
{
    vector<int> heaptree;
    insert(heaptree, 3);
    insert(heaptree, 10);
    insert(heaptree, 5);
    insert(heaptree, 5);
    insert(heaptree, 2);
    cout << "Max-heat array: ";

    printArray(heaptree);

    deleteNode(heaptree, 4);

    cout << "After deleting element: ";

    printArray(heaptree);

    return 0;
}