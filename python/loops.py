



# list = []

# for i in range(n):
#     list.append(i)


# for i in range(len(list)):
#     list[i] *= 2

# # print(list)

# for i in range(0, n, 2):
#     print(i)




# for i in range(1, n+1):
#     for j in range(1, i+1):
#         print('*', end="")
#     print()


# for i in range(1, n+1):
#     print('*' * i)

n = int(input("Enter the range: "))

r = n
if r % 2 == 0:
    r += 1

for i in range(r):
    for j in range(r):
        if i+j < n/2:
            print(" ", end=" ")
        elif j-i > n/2:
            print(" ", end=" ")
        elif i-j > n/2:
            print(" ", end=" ")
        elif i + j - n > n/2:
            print(" ", end=" ")
        else:
            print('*', end=" ")

    print()