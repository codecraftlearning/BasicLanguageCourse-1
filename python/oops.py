

class Shape:

    class ClassNotExtendedError(Exception):
        pass

    def __init__(self, name):
        self.name = name

    # def area(self) -> str:
    #     return f'Area of {self.name} is UNKNOWN!'

    def area(self) -> str:
        print(f'Area of {self.name} is UNKNOWN!')
        raise self.ClassNotExtendedError("Class has not been extended yet!")


s1 = Shape("Square")
s2 = Shape("Circle")

try:
    print(s1.area())
    print(s2.area())
except Shape.ClassNotExtendedError as e:
    print(e)
