#include <iostream>
using namespace std;

// First base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

// Second base class
class Bird {
public:
    void fly() {
        cout << "Bird is flying" << endl;
    }
};

// Derived class that inherits from both Animal and Bird
class Bat : public Animal, public Bird {
public:
    void sleep() {
        cout << "Bat is sleeping" << endl;
    }
};

int main() {
    Bat bat;
    bat.eat();    // Calling function from Animal base class
    bat.fly();    // Calling function from Bird base class
    bat.sleep();  // Calling function from Bat derived class
    return 0;
}





/*
Output :-
Animal is eating
Bird is flying
Bat is sleeping
*/