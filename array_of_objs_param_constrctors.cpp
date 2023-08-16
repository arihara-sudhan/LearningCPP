#include <iostream>
using namespace std;

class mine {
public:
    int x,y;
	mine(int a, int b){
		x = a;
		y = b;
	}
    int get() {
        return x+y;
    }
};

int main() {
    mine o[3] = {mine(1,2),mine(2,3),mine(3,4)};
    for (int i = 0; i < 3; i++) {
        cout << o[i].get() << endl;
    }
    
    return 0;
}
