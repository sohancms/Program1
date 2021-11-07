#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>

using namespace std;

void display2(int ax[], int size2);
void display(int a[], int size);

void insertion_sort(int a[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}
int main()
{
    int data[] = {4, 9, 5, 4, 8, 6, 52, 9, 87, 365, 4};
    int size = sizeof(data) / sizeof(data[0]);

    insertion_sort(data, size);
    display(data, size);
    display2(data, size);

    int data1[] = {200, 100, 500, 300, 400, 900, 700, 800, 600};
    int size1 = sizeof(data1) / sizeof(data1[0]);

    insertion_sort(data1, size1);
    display(data1, size1);
    display2(data1, size1);

    return 0;
}
void display(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void display2(int ax[], int size2)
{
    for (int i = size2 - 1; i >= 0; i--)
    {
        cout << ax[i] << " ";
    }
    cout << endl;
}