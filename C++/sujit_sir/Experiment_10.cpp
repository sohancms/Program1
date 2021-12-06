#include <iostream>
using namespace std;

int largest(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int i, n;
    cout << "Enter total number of element : ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Largest Number in the array =" << largest(arr, n) << endl;
    return 0;
}