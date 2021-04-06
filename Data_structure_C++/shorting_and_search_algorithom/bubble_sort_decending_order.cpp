#include <iostream>
using namespace std;

void bubble_sort(int array[], int size)
{
    //run loop two time : one for walking through the array
    //and the others for comparison

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

//function to print the array..
void printarray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << ' ' << array[i];
    }
}

int main()
{
    int data[] = {41, 58, 65, 2, 36, 15, 21, 25, 11, 10, 9, 45};
    int size = sizeof(data) / sizeof(data[0]);
    bubble_sort(data, size);
    cout << "After Sorting in acending order : " << endl;

    printarray(data, size);

    return 0;
}