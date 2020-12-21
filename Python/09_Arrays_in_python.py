from array import *

salary = array('i', [65454, 8598, 515151, 54544])
print(salary)
print(salary[0])
print(salary[2], '\n')
for i in range(4):
    print(salary[i])

print(salary.buffer_info())
print(salary.append(4000))
print(salary)
print(salary.remove(8598))
print(salary)
print(salary.reverse())
print(salary)
