
class AmountException(Exception):
    pass

class BankAccount:

    __balance: int = 0

    def __init__(self, balance: int):
        self.__balance = balance
    
    def deposit(self, amount: int) -> str:
        if (amount < 0):
            raise AmountException("Amount Cannot be less than 0")
        
        self.__balance += amount
        return f'Banalce after depositing {amount} is: {self.__balance}'
    
    def withdraw(self, amount: int) -> str:
        if (amount < 0):
            raise AmountException("Amount Cannot be less than 0")
        elif (amount > self.__balance):
            raise AmountException("Insufficient amount available")
        
        self.__balance -= amount
        return f'Banalce after withdrawing {amount} is: {self.__balance}'
    
    def currentBalance(self) -> str:
        return f'Your current balance is: {self.__balance}'

try:
    acc = BankAccount(1000)
    print(acc.deposit(1000))
    print(acc.withdraw(500))
    print(acc.currentBalance())
except AmountException as e:
    print(e)
