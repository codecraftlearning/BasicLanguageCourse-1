n = int(input("Enter the range: "))

r = n
if r % 2 == 0:
    r += 1

for i in range(r):
    for j in range(r):
        if i <= r//2:
            if j <= i or j >= r - i - 1:
                print("*", end=" ")
            else:
                print(" ", end=" ")
        else:
            if j <= r - i - 1 or j >= i:
                print("*", end=" ")
            else:
                print(" ", end=" ")
    print()
