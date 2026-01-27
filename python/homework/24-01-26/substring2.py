s1 = "abcdefghij"
s2 = "efgh"

m = len(s1)
n = len(s2)
found = False

# s1= 0, s2=0; s1= 1, s2=0 ; s1=s2; s1= 4 s2= 0; s1= 5 s2= 1;
for i in range(m - n + 1):
    match = True
    for j in range(n):
        if s1[i+j] != s2[j]:
            match = False
            found = False
            break
        else:
            found = True
            break

print(found)
