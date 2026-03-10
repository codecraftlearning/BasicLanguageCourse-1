
# nums = 'ankit'

# it = iter(nums)

# print(next(it))
# print(next(it))
# print(next(it))
# print(next(it))
# print(next(it))


class Counter:

    current: int = 0
    max: int = 0

    def __init__(self, max: int):
        self.max = max
        self.current = 0
    
    def __iter__(self):
        return self
    
    def __next__(self):
        if self.current <= self.max:
            val = self.current
            self.current += 1
            return val
        else:
            raise StopIteration
        

class ToDo:
    items: list[str] = []
    completed: int = -1

    def __init__(self, items: list[str]):
        self.items = items
        
    def __iter__(self):
        return self

    def __next__(self):
        if self.completed < len(self.items)-1:
            self.completed += 1
            return self.items[self.completed]
        else:
            raise StopIteration



# todo = ToDo(['a', 'b', 'c', 'd', 'e', 'f'])

# for i in todo:
#     print(i)




def doMultiTasks():

    print("Task 1 started")
    yield "Task 1 Completed"

    print("Task 2 started")
    yield "Task 2 in middle"
    print("Task 2 completed")

    print("Task 3 started")
    yield "Task 3 Completed"

task = doMultiTasks()

print(next(task))

print("check1")

print(next(task))

print("check2")

print(next(task))