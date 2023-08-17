#include <iostream>
using namespace std;

class Skeleton {
public:
    int x = 100;
    void show() {
        cout << "WHAT TO SHOW?" << endl;
    }
};

int main() {
    Skeleton obj1;
    int Skeleton::*dptr;
    void (Skeleton::*fptr)();

    dptr = &Skeleton::x;
    fptr = &Skeleton::show;

    int value = obj1.*dptr;
    cout << value << endl;

    (obj1.*fptr)();

    return 0;
}
