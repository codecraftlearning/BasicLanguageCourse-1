/*
    OOPs  ->  Object Orient Programmings
*/

#include <iostream>
#include <string>

using namespace std;

class Person {
    public:
        double height;
        double weight;

        Person(double height, double weight) {
            this->height = height;
            this->weight = weight;
        }

        ~Person(){}
};

// struct Student
class Student
{
    private: 
        string _name;
        int _age;
        int _roll;
        string _standard;

    public: 
        Student(string name, int age, int roll, int standard)
        {
            this->name(name);
            this->age(age);
            this->roll(roll);
            this->standard(standard);
        }

        ~Student() {
            cout << "Destroyed";
        }

        void name(string name) {
            this->_name = name;
        }

        string name() {
            return this->_name;
        }

        void age(int age) {
            this->_age = age;
        }
        
        int age() {
            return this->_age;
        }

        void roll(int roll) {
            this->_roll = roll;
        }

        int roll() {
            return this->_roll;
        }

        void standard(int standard)
        {
            string suffix = "";
            switch (standard)
            {
            case 1:
                suffix = "st";
                break;
            case 2:
                suffix = "nd";
                break;
            case 3:
                suffix = "rd";
                break;
            default:
                suffix = "th";
            }

            this->_standard = to_string(standard) + suffix;
        }

        string standard() {
            return this->_standard;
        }

        string toString()
        {
            return "Name: " + this->name() + ", Age: " + to_string(this->age()) + ", Roll: " + to_string(this->roll()) + ", Standard: " + this->standard() + ".";
        }
};

int main()
{
    int size = 3;
    Student *students[size];
    students[0] = new Student("Ankit", 30, 10, 12);
    students[1] = new Student("Arushi", 20, 1, 10);
    students[2] = new Student("Vidushi", 19, 4, 1);
    students[2]->standard(2);

    for (int i = 0; i < size; i++)
    {
        cout << students[i]->toString() << endl;
    }
}

// wtite a program to add multiple student details in a array and print all the details of each student one by one ;
/*
    student sholuld contain, name, age, roll, standard
*/