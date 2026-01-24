n = int(input("Enter the range: "))

r = n
if r % 2 == 0:
    r += 1

for i in range(r):
    for j in range(2*r):
        if j >= r - i - 1 and j <= r + i - 1:
            print("*", end="")
        else:
            print(" ", end="")
    print()
