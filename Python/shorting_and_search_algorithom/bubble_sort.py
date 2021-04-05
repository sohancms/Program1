# bubble sort in python
def bubble_sort(array):
    for i in range(len(array)):
        for j in range(0, len(array)-i-1):
            if(array[j] > array[j+1]):
                (array[j], array[j+1]) = (array[j+1], array[j])


data = [455, 4, 6, 34, 0, -45]
bubble_sort(data)
print("Sorted array in acending order : \n")
print(data)
