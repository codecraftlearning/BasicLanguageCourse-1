name = input("Enter customer name: ")
bill = int(input("Enter bill amount: "))

if bill > 5000:
    discount_rate = 0.20
elif bill > 3000:
    discount_rate = 0.10
elif bill >= 1000:
    discount_rate = 0.05
else:
    discount_rate = 0

discount = bill * discount_rate
final_bill = bill - discount

print("\nBILL DETAILS")
print("Customer Name:", name)
print("Original Bill: ₹", bill)
print("Discount: ₹", discount)
print("Final Bill: ₹", final_bill)
