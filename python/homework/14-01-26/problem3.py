name = input("Enter employee name: ")
salary = input("Enter salary: ")
salary = int(salary)
rating = input("Enter performance rating (1 to 5): ")
rating = int(rating)

bonus = 0

if rating >= 4 and salary < 50000:
    bonus = salary * 0.15
elif rating >= 3 and salary >= 50000:
    bonus = salary * 0.10
else:
    bonus = 0

print("\nEMPLOYEE DETAILS")
print("Name:", name)
print("Salary:", salary)
print("Performance Rating:", rating)
print("Bonus Amount:", bonus)
