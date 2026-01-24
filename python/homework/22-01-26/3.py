n = int(input("Enter the range: "))

r = n
if r % 2 == 0:
    r += 1

for i in range(r):
    for j in range(r):
        if j == i or j == r - i - 1:
            print("*", end=" ")
        else:
            print(" ", end=" ")
    print()
