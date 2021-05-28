#include <iostream>
using namespace std;

void insertion_sort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] < temp)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = temp;
    }
}

void print_array(int array[], int size)
{
    cout << "After decending Order of the Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ' ';
    }
}
int main()
{
    int data[] = {1, 4, 5, 7, 15, 2, 10, 14, 13, 9};
    int size = sizeof(data) / sizeof(data[0]);
    insertion_sort(data, size);
    print_array(data, size);
}