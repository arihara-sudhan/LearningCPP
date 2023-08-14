#include <iostream>
using namespace std;
/*
Static member functions are often used for utility functions
that are related to the class but don't require access to
instance-specific data.
*/

class MathOperations {
public:
    static int add(int a, int b) {
        return a + b;
    }

    static int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    int x = 5, y = 3;

    int sum = MathOperations::add(x, y);       // Calling the static function using the class name
    int product = MathOperations::multiply(x, y);

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;

    return 0;
}
