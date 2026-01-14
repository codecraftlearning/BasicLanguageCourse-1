

#include <iostream>
#include <math.h>

using namespace std;

class Polygon {
    public:
        static string type;  
        Polygon() {}
        // static void printName() {
        //     cout << "printing polygon" << endl;
        // }
};

class Shape : public Polygon {
    public: 
        Shape() {}
        virtual double area() {
            return 0.0;
        }
};

class Circle : public Shape {
    private:
        int _radius;
    
    public: 
        Circle(int radius) {
            
            this->radius(radius);
        }
    
        void radius(int radius)  {
            this->_radius = radius;
        }

        int radius() {
            return this->_radius;
        }

        double area() override {
            return  (22 * this->radius() * this->radius()) / 7.0;
        }
};

class Square : public Shape {
    private:
        int _edge;
    
    public: 
        Square(int edge) {
            this->edge(edge);
        }
    
        void edge(int edge)  {
            this->_edge = edge;
        }

        int edge() {
            return this->_edge;
        }

        double area() {
            return this->edge() * this->edge();
        }
};

class Triangle : public Shape {
    private:
        int _a1;
        int _a2;
        int _a3;
    
    public: 
        Triangle(int a1, int a2, int a3) {
            this->a1(a1);
            this->a2(a2);
            this->a3(a3);
        }
    
        void a1(int a1)  {
            this->_a1 = a1;
        }
        void a2(int a2)  {
            this->_a2 = a2;
        }
        void a3(int a3)  {
            this->_a3 = a3;
        }

        int a1() {
            return this->_a1;
        }
        int a2() {
            return this->_a2;
        }
        int a3() {
            return this->_a3;
        }

        double area() {
            double s = (this->a1() + this->a2() + this->a3())/2.0;
            double value = s * (s - this->a1()) * (s - this->a2()) * (s - this->a3());
            return sqrt(value);
        }
};



int main() {

    Polygon::type = "Polygon";

    Circle* circle = new Circle(5);
    cout << circle->area() << endl;

    Square* square = new Square(10);
    cout << square->area() << endl;
    
    Triangle* triangle = new Triangle(3, 4, 5);
    cout << triangle->area() << endl;

    Shape* shape = new Square(10);
    cout << Polygon::type << shape->area() << endl;


    // Polygon::printName();
}