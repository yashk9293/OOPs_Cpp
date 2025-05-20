#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived class from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

// Further derived class from Dog
class Puppy : public Dog {
public:
    void weep() {
        cout << "Puppy is weeping." << endl;
    }
};

int main() {
    Puppy puppy;

    // Calling methods from each level of inheritance
    puppy.eat();    // From Animal class
    puppy.bark();   // From Dog class
    puppy.weep();   // From Puppy class

    return 0;
}



/*
Output :-
Animal is eating.
Dog is barking.
Puppy is weeping.
*/