#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

// Derived class - Dog inherits from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

// Derived class - Cat inherits from Animal
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing" << endl;
    }
};

int main() {
    Dog myDog;
    Cat myCat;

    // Dog can access eat() from Animal and bark() from Dog
    myDog.eat();
    myDog.bark();

    // Cat can access eat() from Animal and meow() from Cat
    myCat.eat();
    myCat.meow();

    return 0;
}





/*
Output :- 
Animal is eating
Dog is barking
Animal is eating
Cat is meowing
*/