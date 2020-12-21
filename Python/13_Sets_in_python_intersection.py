s1 = {4, 5, 6, 7, 8, 9}
s2 = {1, 2, 3, 5, 7, 9, 10}
s3 = {5, 6, 7, 11, 12}
s4 = s1.intersection(s2)
print(s4)
s4 = s1.intersection(s2, s3)
print(s4)
s4 = s1.difference(s3)
print(s4)
s4 = s1.symmetric_difference(s3)
print(s4)
