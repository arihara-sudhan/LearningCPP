#include <iostream>
using namespace std;

class MyClass {
public:
    int x;

    MyClass(int a) {
        x = a;
    }

    void printX() {
        cout << "Value of x using this: " << this->x << endl;
    }
};

int main() {
    MyClass obj(42);
    obj.printX();

    return 0;
}
