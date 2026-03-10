

from abc import ABC, abstractmethod


class Shape(ABC):
    __name: str = None
    
    def __init__(self, name: str):
        self.__name = name

    @abstractmethod
    def area(self):
        pass
        # return f'Area of the shape {self.__name} is: {None}'
    

class Square(Shape):

    __edge: int = 0

    def __init__(self, name: str, edge: int):
        self.__edge = edge
        self.__name = name

    @property
    def edge(self) -> int:
        return self.__edge
    
    @edge.setter
    def edge(self, edge: int):
        print('here')
        self.__edge = edge

    @property
    def area(self):
        return f'Area of the shape {self.__name} is: {self.__edge * self.__edge}'
    
s1 = Square('Sq1', 10)
s1.edge = 20
print(s1.area)
