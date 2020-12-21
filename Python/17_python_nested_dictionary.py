Student = {1: {'Name': 'Sohan', 'Age': 21, 'Sex': 'Male'},
           2: {'Name': 'Karim', 'Age': 21, 'Sex': 'Male'},
           3: {'Name': 'Sadia', 'Age': 21, 'Sex': 'Female'}}
print(Student)
print(Student[1])
print(Student[1]['Age'])
print(Student[1]['Name'])
print(Student[3]['Sex'])

Student[5] = {}
Student[5]['Name'] = 'Hridoy Mia'
Student[5]['Age'] = 18
Student[5]['Sex'] = 'Male'
print(Student[5])
print(Student)

del Student[5]['Sex']
print(Student[5])
del Student[5]
print(Student)
