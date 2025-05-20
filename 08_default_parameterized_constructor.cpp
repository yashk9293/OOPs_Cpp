#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Default constructor
    Person() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called!" << endl;
    }

    // Parameterized constructor
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized constructor called!" << endl;
    }

    // Method to display person's details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Creating an object using the default constructor
    Person person1;
    person1.display();

    // Creating an object using the parameterized constructor
    Person person2("Alice", 25);
    person2.display();

    return 0;
}



/*
Output :-
Default constructor called!
Name: Unknown, Age: 0
Parameterized constructor called!
Name: Alice, Age: 25
*/