import os
print("Working directory:", os.getcwd())

# r mode
f = open("python/homework/05-02-26/file.txt", "r")
print(f.read())
f.close()

# w mode
f = open("python/homework/05-02-26/file.txt", "w")
f.write("Hello world")
f.close()

# a mode
f = open("python/homework/05-02-26/file.txt", "a")
f.write("\nAppended text")
f.close()

# x mode (create new file)
# f = open("newfile.txt", "x")

# r+ mode (read + write)
f = open("python/homework/05-02-26/file.txt", "r+")
print(f.read())
f.write("\nAdded using r+")
f.close()

# w+ mode (write + read)
f = open("python/homework/05-02-26/file.txt", "w+")
f.write("New data")
f.seek(0)
print(f.read())
f.close()

# a+ mode (append + read)
f = open("python/homework/05-02-26/file.txt", "a+")
f.write("\nAppend + read")
f.seek(0)
print(f.read())
f.close()
