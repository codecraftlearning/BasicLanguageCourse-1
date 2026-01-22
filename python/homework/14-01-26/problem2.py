a = input("Enter first number: ")
a = int(a)
b = input("Enter second number: ")
b = int(b)

op = input("Enter operation (+, -, *, /): ")

if op == "+":
    print("Operation: Addition")
    print("Result:", a + b)

elif op == "-":
    print("Operation: Subtraction")
    print("Result:", a - b)

elif op == "*":
    print("Operation: Multiplication")
    print("Result:", a * b)

elif op == "/":
    print("Operation: Division")
    if b != 0:
        print("Result:", a / b)
    else:
        print("Error: Division by zero not allowed")

else:
    print("Invalid operation selected")
