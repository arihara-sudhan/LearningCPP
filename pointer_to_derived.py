#include <iostream>
using namespace std;

class Base {
public:
    int x = 10;
    int getx(){
    	return x;
    }
};

class Child : public Base {
public:
    int y = 20;
    int gety(){
    	return y;
    }
};

int main() {
    Base *bp;
    Child ch;
    bp = &ch; // BASE POINTER POINTS TO CHILD
    cout << bp->getx() << endl; // Accessing Base class member using pointer
    // cout << bp->gety() << endl; // This line would cause an error, as bp can't access gety() directly
    return 0;
}
