// Run Time Function Overriding

#include <iostream>
using namespace std;

class Base {
public:
    // Declare the function as virtual to allow overriding in derived classes
    virtual void display() {
        cout << "Display method of Base class" << endl;
    }

    // Virtual destructor to ensure proper cleanup of derived class objects
    virtual ~Base() {
    }
};

class Derived : public Base {
public:
    // Override the display method
    void display() override {
        cout << "Display method of Derived class" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    // Point base class pointer to derived class object
    basePtr = &derivedObj;

    // This will call the display method of the Derived class due to the virtual function mechanism
    basePtr->display();

    return 0;
}


/*
Output :- 
Display method of Derived class
*/