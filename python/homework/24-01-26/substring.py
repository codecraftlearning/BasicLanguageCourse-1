s1 = "abcdefghij"
s2 = "efgh"

m = len(s1)
n = len(s2)

found = False

for i in range(m - n + 1):
    match = True
    for j in range(n):
        if s1[i + j] != s2[j]:
            match = False
            break
    if match:
        found = True
        break

if found:
    print("True")
else:
    print("False")
