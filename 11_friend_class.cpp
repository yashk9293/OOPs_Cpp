#include <iostream>
using namespace std;

class B;  // Forward declaration

class A {
private:
    int x = 10;

    friend class B;  // B is a friend of A
};

class B {
public:
    void show(A& a) {
        cout << "Accessing A's private member: " << a.x << endl;
    }
};


int main() {
    A a;
    B b;
    b.show(a);  // B can access A's private member
    return 0;
}


// Output:
// Accessing A's private member: 10