#include <iostream>
using namespace std;

class Box {
private:
    double width, height;

public:
    // Constructor to initialize width
    Box(double w, double h) {
        this->width = w;
        this->height = h;
    }

    // Friend function declaration
    friend int printWidth(Box b) {
        return (b.width * b.height);
    }
};

int main() {
    Box box(10, 15);

    // Calling the friend function
    int res = printWidth(box);
    cout << res;
    return 0;
}



// 150