#include <iostream>
using namespace std;

class mine {
public:
    int x = 2;
    int get() {
        return x*x;
    }
};

int main() {
	mine o;
	mine *p = &o;
	cout<< p->get() <<endl;
    return 0;
}
