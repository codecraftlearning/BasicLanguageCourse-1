

#  what is the difference b/w an Error and an Exception?


# Runtime Exception



# try:
#     x = 10 / 0  # zeroDivision Error
#     print(x)
# except ZeroDivisionError:
#     print("Handled divide by zero error")
      
# def tryThis() -> int:
#     try:
#         num1 = int(input("Entry 1st number: "))
#         num2 = int(input("Entry 2nd number: "))
#         return num1 / num2
    
#     except (ValueError, TypeError):
#         print("Only number allowed")
#     except ZeroDivisionError:
#         print("zero divide error occured")

#     except Exception as e:
#         print("Excepton Occured", e)

#     else:
#         print("Program executed successfully")
#     finally:
#         print("doing someting")

# print(tryThis())

class NegativeNumberException(Exception):
    pass

def fetchNumberFormConsole(prompt: str) -> int :
    value = input(prompt + ': ')
    try: 
        num = int(value)
        return num
    except (ValueError, TypeError):
        raise ValueError("Invalid Value Found: Cannot cast into integer")


def fetchPositiveNumberFormConsole(prompt: str) -> int :
    value = input(prompt + ': ')
    try: 
        num = int(value)
        if (num < 0) :
            raise NegativeNumberException("Negetive Number not allowed")
        return num
    except (ValueError, TypeError):
        raise ValueError("Invalid Value Found: Cannot cast into integer")



# try: 
#     num1 = fetchNumberFormConsole("Enter a number")
# except ValueError as e:
#     print("here", e)

try: 
    num1 = fetchPositiveNumberFormConsole("Enter a +ve number")
except Exception as e:
    print(e)

