#include <iostream>
using namespace std;
/*
When you precede a member variable's declaration with static, you are telling the
compiler that only one copy of that variable will exist and that all objects of the class
will share that variable. Unlike regular data members, individual copies of a static
member variable are not made for each object. No matter how many objects of a class
are created, only one copy of a static data member exists. Thus, all objects of that class
use that same variable. All static variables are initialized to zero before the first object
is created.
*/

class Ari {
public:
    static int A;
    int B;

    Ari(int b) {
        B = b;
    }

    void show() {
        cout << A << endl << B << endl;
    }
};

// Initialize the static member variable A
int Ari::A = 0;

int main() {
    Ari ari1(2);
    Ari ari2(4);
    Ari ari3(6);
    
    cout << Ari::A << endl; // Access static variable through class name
    cout << ari1.B << endl;
    cout << ari2.B << endl;
    cout << ari3.B << endl;

    return 0;
}
