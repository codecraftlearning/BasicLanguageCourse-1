
#sum of squares of 2 numbers
#lambda function

# def init():
#     """ 
#         This function take 2 number input 
#         and squares it then print the sum 
#     """
#     num1 = int(input('Enter Number 1: '))
#     num2 = int(input('Enter Number 2: '))

#     numSquare = lambda n1: n1 ** 2

#     sum = numberSum(numSquare(num1), numSquare(num2))
#     print(sum)

def numSquare(num) -> int:
    return num ** 2

# def numberSum(num1, num2) -> int:
#     return num1 + num2


# print(init.__doc__)
# init()




nums = [1,2,3,4,5,6,7,8,9,0]

# for i in range(len(nums)):
#     nums[i] *= 2
#List transformation
result = tuple(map(lambda n1: n1 ** 2, nums))
print("List transformed: ", result)



#Filter items
result = list(filter(lambda n : n%2 == 0, nums))
print("List filtered: ", result)


#reduce function
from functools import reduce

result = reduce(lambda a,b: a+b, nums)
print("List reduced: ", result)



