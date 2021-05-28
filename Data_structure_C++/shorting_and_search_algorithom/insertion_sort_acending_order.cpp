#include <iostream>
using namespace std;

void print_array(int a[], int size);

void insertion_sort(int a[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int item = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > item)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = item;
    }
}

int main()
{
    int data[] = {9, 5, 1, 4, 6, 89, 55, 24, 45};
    int size = sizeof(data) / sizeof(data[0]);
    insertion_sort(data, size);
    print_array(data, size);
}

// Function to print an array
void print_array(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << ' ';
    }
}