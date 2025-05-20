#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void fun() { cout << "Base" << endl; }
};

// Parent class 1
class Parent1 : public Base {
public:
};

// Parent class 2
class Parent2 : public Base {
public:
};

// Child class inheriting from both Parent1 and Parent2
class Child : public Parent1, public Parent2 {
};


int main() {
    Child obj;
    obj.fun(); // Abiguity arises, as Child now has two copies of fun()
    return 0;
}








// Virtual Inheritance
#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void fun() { cout << "Base" << endl; }
};

// Parent class 1
class Parent1 : virtual public Base {
public:
};

// Parent class 2
class Parent2 : virtual public Base {
public:
};

// Child class inheriting from both Parent1 and Parent2
class Child : public Parent1, public Parent2 {
};

int main() {
    Child obj; 
    obj.fun(); // No ambiguity, calls the Base::fun() method
    return 0;
}