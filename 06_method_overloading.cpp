#include <iostream>
using namespace std;

class MathOperations {
public:
    // Overloaded add method for two integers
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded add method for three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Overloaded add method for two double values
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    MathOperations math;

    cout << "Addition of two integers: " << math.add(3, 4) << endl;          // Calls add(int, int)
    cout << "Addition of three integers: " << math.add(3, 4, 5) << endl;     // Calls add(int, int, int)
    cout << "Addition of two doubles: " << math.add(3.4, 4.5) << endl;       // Calls add(double, double)

    return 0;
}



/*
Output :-
Addition of two integers: 7
Addition of three integers: 12
Addition of two doubles: 7.9
*/