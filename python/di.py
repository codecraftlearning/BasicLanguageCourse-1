

student = {
    "name": "ankit",
    "age": 31,
    "contact": 123123123,
    "address": {
        "street": "s1",
        "city": "noida",
        "state": "UP"
    },
    "hobbies": ["a", "b", "c"]
}

for key in student.keys():
    print(f'on key ({key}) my value is {student[key]}')

