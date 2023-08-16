#include <iostream>
using namespace std;

class mine {
public:
    int x;
	mine(int a){
		x = a;
	}
    int get() {
        return x*x;
    }
};

int main() {
    mine o[3] = {1,2,3}; // same as {mine(1),mine(2),mine(3)}
    for (int i = 0; i < 3; i++) {
        cout << o[i].get() << endl;
    }
    
    return 0;
}
