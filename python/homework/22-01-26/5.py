n = int(input("Enter the range: "))

r = n
if r % 2 == 0:
    r += 1

for i in range(r):
    for j in range(2*r):
        if j >= i and j <= 2*r - i - 2:
            print("*", end="")
        else:
            print(" ", end="")
    print()
