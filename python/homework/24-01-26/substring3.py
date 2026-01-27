s1 = "abcdeffghij"
s2 = "ef"

s1p = 0
s2p = 0

while s1p < len(s1) and s2p < len(s2):
    if s1[s1p] != s2[s2p]:
        s1p += 1
        s2p = 0
    else:
        s1p += 1
        s2p += 1


if s2p == len(s2):
    print("Yes it's a substring.")
else:
    print("Substring not found.")
