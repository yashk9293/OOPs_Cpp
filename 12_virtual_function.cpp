#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function
    virtual void draw() {
        cout << "Drawing a generic shape" << endl;
    }

    // Pure virtual function (makes Shape an abstract class)
    virtual double area() = 0; // No definition, must be overridden by derived classes
};

// Derived class 1
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        this->radius = r;
    }

    // Override the virtual function
    void draw() override {
        cout << "Drawing a circle" << endl;
    }

    // Override the pure virtual function
    double area() override {
        return 3.1415 * radius * radius;
    }
};

// Derived class 2
class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        this->length = l;
        this->width = w;
    }

    // Override the virtual function
    void draw() override {
        cout << "Drawing a rectangle" << endl;
    }

    // Override the pure virtual function
    double area() override {
        return length * width;
    }
};

int main() {
    // Using pointers to call overridden functions
    Shape *bptr;
    Circle c(5.0);
    bptr = &c;

    // Calling the virtual and pure virtual functions
    bptr->draw();
    cout << "Area of circle: " << bptr->area() << endl;

    Shape *bptr2;
    Rectangle r(4.0,6.0);
    bptr2 = &r;

    bptr2->draw();
    cout << "Area of rectangle: " << bptr2->area() << endl;

    return 0;
}




/*
Output :-
Drawing a circle
Area of circle: 78.5375
Drawing a rectangle
Area of rectangle: 24
*/