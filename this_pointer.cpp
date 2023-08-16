#include <iostream>
using namespace std;

class MyClass {
public:
    int x;

    MyClass(int a) {
        x = a;
    }

    void printX() {
        cout << "Value of x: " << x << endl;
    }

    void printThisAddress() {
        cout << "Address of this: " << this << endl;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2(20);

    cout << "Address of obj1: " << &obj1 << endl;
    obj1.printX();
    obj1.printThisAddress();

    cout << "Address of obj2: " << &obj2 << endl;
    obj2.printX();
    obj2.printThisAddress();

    return 0;
}
