s = {1, 2, 3}
s.add(4)
print("add():", s)

a = s.copy()
print("copy():", a)

s.discard(2)
print("discard():", s)

s.remove(3)
print("remove():", s)

x = s.pop()
print("pop(): removed ->", x, " remaining ->", s)

s.update([10, 20, 30])
print("update():", s)

a = {1, 2, 3}
b = {3, 4, 5}
print("union():", a.union(b))

print("intersection():", a.intersection(b))

print("difference():", a.difference(b))

p = {1, 2}
q = {1, 2, 3, 4}
print("issubset():", p.issubset(q))

print("issuperset():", q.issuperset(p))

m = {1, 2}
n = {3, 4}
print("isdisjoint():", m.isdisjoint(n))

r = {100, 200}
r.clear()
print("clear():", r)
