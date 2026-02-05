
#read operation

# file = open("./demo.txt", 'r')
# content = file.read()
# print(content)
# file.close()

# file = open('./demo.txt', 'r')
# for line in file:
#     print(line.strip())
# file.close()

#Write into file


# file = open('./demo.txt', 'w')
# file.write("My name is ankit\n")
# file.write('her name is arushi\n')
# file.close()


#appending into file


# file = open('./demo.txt', 'a')
# file.write("My name is ankit\n")
# file.write('her name is arushi\n')
# file.close()

#With Statement

with open('./demo.txt', 'r') as file:
    content = file.read()   
    print(content) 
