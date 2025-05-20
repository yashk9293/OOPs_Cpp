#include <bits/stdc++.h>
using namespace std;

// Base class
class Animal {
public:
    string animalName; 
    Animal(string str) {
        this->animalName = str;
    }
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    int age;
    Dog(string animalName, int age) : Animal(animalName){
        this->age = age;
    }
    void bark() {
        cout << "Dog is barking" << endl;
        cout << "Animal name : " << animalName << endl;
        cout << "Animal age : " << age;
    }
};

int main() {
    Dog dog("Bobby", 8);
    dog.eat();   // Calling the base class function
    dog.bark();  // Calling the derived class function
    return 0;
}



/*
Output :-
Animal is eating
Dog is barking
Animal name : Bobby
Animal age : 8
*/
