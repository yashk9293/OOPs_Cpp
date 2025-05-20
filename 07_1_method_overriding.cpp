// Compile Time Function Overriding

#include <iostream>
using namespace std;

class Parent {
public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Child : public Parent {
public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Child c;
    c.print();
    return 0;
}


/*
Output :-
Derived Function
*/