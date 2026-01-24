n = int(input("Enter the range: "))

r = n
if r % 2 == 0:
    r += 1


for i in range(r):
    spaces = i + 1
    stars = r - spaces
    for j in range(spaces):
        print(" ", end="")
    for j in range(stars):
        print("* ", end="")
    print()
