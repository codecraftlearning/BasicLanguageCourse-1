numbers = [10, 20, 30, 40]
print(sum(numbers))

numbers = [5, 12, 3, 20, 8]
print(max(numbers))
print(min(numbers))

numbers = [4, 1, 7, 3]
print(sorted(numbers))
print(sorted(numbers, reverse=True))

fruits = ["apple", "banana", "mango"]
for index, fruit in enumerate(fruits):
    print(index, fruit)

names = ["Arushi", "Rose", "Vidushi"]
marks = [90, 85, 88]
combined = zip(names, marks)
for n, m in combined:
    print(n, m)

values = [False, False, True]
print(any(values))

values = [True, True, False]
print(all(values))
