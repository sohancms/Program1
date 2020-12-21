list = [1, 5, 6.25, 4, 9, 45.453, 'Sohan']
print(list)
list = [1, 5, 6.25, ['Abdullah Al Sohan', 1, 2, 3, 4, 5], 4, 9, 45.453, 'Sohan']
print(list)
print(list[2])
print(list[3])  # nested list print
print(list[3][0])  # nested list first value print
list = list+[100, 200, 300, 400]  # list add
print(list)
list = [1000, 2000, 2000, 3000, 4000, 5000, 3000, 3000]
list.extend([3, 4, 5, 6, 7])
print(list)
list.remove(list[4])
print(list)
list.remove(2000)
print(list)
print(list.count(3000))
