#include <iostream>
using namespace std;

void merge(int arr[], int ip, int middle, int tp)
{
    int n1, n2;
    n1 = middle - ip + 1;
    n2 = tp - middle;
    int arr_n1[n1], arr_n2[n2];
    for (int i = 0; i < n1; i++)
    {
        arr_n1[i] = arr[ip + i];
    }

    for (int j = 0; j < n2; j++)
    {
        arr_n2[j] = arr[middle + 1 + j];
    }

    int i, j, temp;
    i = 0;
    j = 0;
    temp = ip;
    while (i < n1 && j < n2)
    {
        if (arr_n1[i] <= arr_n2[j])
        {
            arr[temp] = arr_n1[i];
            i++;
        }
        else
        {
            arr[temp] = arr_n2[j];
            j++;
        }
        temp++;
    }

    while (i < n1)
    {
        arr[temp] = arr_n1[i];
        i++;
        temp++;
    }

    while (j < n2)
    {
        arr[temp] = arr_n2[j];
        j++;
        temp++;
    }
}

void merge_sort(int arr[], int ip, int tp) // ip = is initial_point  & tp = terminal_point of array index..
{
    if (ip < tp)
    {
        int middle = ip + (tp - ip) / 2;
        merge_sort(arr, ip, middle);
        merge_sort(arr, middle + 1, tp);
        merge(arr, ip, middle, tp);
    }
}

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int arr[] = {6, 5, 12, 10, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    merge_sort(arr, 0, size - 1);

    cout << "Sorted array : " << endl;
    print_array(arr, size);
    return 0;
}