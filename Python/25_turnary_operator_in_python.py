print('Yes' if True else'No')
a, b = 30, 40
min = a if a < b else b
print(min)

a, b = 100, 200
min = a if a > b else b
print(min)

num = int(input('Enter any integer number :'))
result = 'number is even' if num % 2 == 0 else 'number is odd'
print(result)
