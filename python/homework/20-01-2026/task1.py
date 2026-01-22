a = [1, 2, 3]
print("Initial list:", a)

a.append(4)
print("After append(4):", a)

a.extend([5, 6])
print("Extended", a)

a.insert(1, 10)
print("inserted", a)

a.remove(3)
print("removed", a)

x = a.pop()
print("After pop", a)
print("Popped value", x)

y = a.pop(0)
print("popped", a)
print(y)

pos = a.index(4)
print(a)
print(pos)

c = a.count(1)
print(c)

a.sort()
print(a)

a.reverse()
print(a)

b = a.copy()
print(b)

d = a.clear()
print(a)
print(d)
