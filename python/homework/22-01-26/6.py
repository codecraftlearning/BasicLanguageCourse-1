n = int(input("Enter the range: "))

r = n
if r % 2 == 0:
    r += 1


for i in range(r):
    stars = i + 1
    spaces = r - stars
    for j in range(spaces):
        print(" ", end="")
    for j in range(stars):
        print("* ", end="")
    print()
