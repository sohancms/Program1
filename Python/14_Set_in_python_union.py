s1 = {1, 2, 3, 4, 5}
s2 = {2, 3, 6, 7, 8}
result = s1.union(s2)
print(result)
s3 = {2, 4, 9, 10}
result = s1.union(s2, s3)
print(result)

result = s1 | s2 | s3
print(result)
