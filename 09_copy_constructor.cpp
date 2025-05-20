#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n, int a) {
        this->name = n;
        this->age = a;
    }

    // Default copy constructor (implicitly provided by C++)
    // Person(Person &p){
    //     cout << "default copy constructor called!" << endl;
    // }

    // User-defined copy constructor
    Person(Person &p) {
        name = p.name;
        age = p.age;
        cout << "User-defined copy constructor called!" << endl;
    }

    // Method to display person's details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Creating an object using the parameterized constructor
    Person person1("Alice", 30);
    person1.display();

    // Creating a new object using the copy constructor
    Person person2 = person1;  // Copy constructor is called here
    person2.display();

    return 0;
}



/*
Output :-
Name: Alice, Age: 30
User-defined copy constructor called!
Name: Alice, Age: 30
*/