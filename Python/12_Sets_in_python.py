s1 = set([1, 5, 9, 7, 36, 7, 58, 4, 8])
print(s1)  # set always show carly bracket
s2 = {1, 2, 3, 4, 5, 6, 7}  # this is set
print(s2)
# set show the same valu at a time or duplicat valu does't show
s2 = {1, 2, 3, 4, 6, 7, 1, 2, 3, }
print(s2)
s2.add(5)
print(s2)
s2.update([8, 9, 10, 11, 12, 13])
print(s2)

a1 = {100, 101, 102, 103}
a2 = {104, 105, 106, 107, 108}
a1.update(a2, a1)
print(a1)
a2.update([7, 4, 5], a2)
print(a2)

a1.remove(100)  # value must be remain
print(a1)

p1 = {51, 52, 53, 54, 51, 52, 53}
print(p1)
p1.discard(52)  # value will be delete if vale ramain or not..
print(p1)
# valu remain or not nremain in the set valu must be discard but never shew wrong
p1.discard(85)
print(p1)
