# # print("My First Program")

# # int num1 = 10;
# num1 = 10273478354534836284.1
# num2 = 12.5

# isVerified = False

# name = "ankit"

# print(num1)

# name = "ABC"
# print(name + name)


# >30 is hot, >24 is warm >16 is nice rest cold

temperature = input("Whats the temperature today: ")
temperature = int(temperature)

# if temperature > 30:
#     print("Hot")
# elif temperature > 24:
#     print("warm")
# elif temperature > 16:
#     print("nice")
# else:
#     print("cold")


match temperature:
    case n if n > 30:
        print("hot")
    case 40:
        print("very hot")
    case 10:
        print("cold")

print("done")
