
s1 = {1,2,3,4,5,6}
s2 = {4,5,6,7,8,9}

s3 = s1 | s2 
s3 = s1.union(s2) 

s4 = s1 & s2
s4 = s1.intersection(s2)

s5 = s1 - s2
s5 = s1.difference(s2)

s6 = s1 ^ s2
s6 = s1.symmetric_difference(s2)



f1 = frozenset([1,2,3])
f2 = frozenset([1,2])

print(f1 - f2)




