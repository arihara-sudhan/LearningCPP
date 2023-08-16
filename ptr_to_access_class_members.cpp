#include <iostream>
using namespace std;

class mine {
	public:
	    int x = 3;
};

int main() {
	mine o;
	int *p = &o.x;
	cout<< *p << "\n";
    return 0;
}
