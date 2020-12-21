d1 = {'Name': 'Sohan', 'Age': '21', 'Bdate': '1997'}
d2 = {'Name': 'Abdullah Al Sohan', 10: 10, 10.5: 10.5, True: True, (2, 3): 5}
print(d1)
print(d1['Age'])
print(d2)
print(d2[(2, 3)])
d3 = d2.copy()
print(d3)
x = len(d2)
print(x)
d2['varsity'] = 'BSFMSTU'
print(d2)
d2.pop('varsity')
d2.clear()
print(d2)
