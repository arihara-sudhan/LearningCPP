#include <iostream>
using namespace std;

class mine {
public:
    int x;
	mine(int a){
		x = a;	// CALLED FOR INIT ARRAYS
	}
	mine(){
		cout<<"HEY"<<endl; // CALLED FOR NON-INIT ARRAYS
	}
    int get() {
        return x*x;
    }
};

int main() {
    mine o1[3] = {1,2,3}; // INITIALIZED
    mine o2[3]; // NOT INITIALIZED
    for (int i = 0; i < 3; i++) {
        cout << o1[i].get() << endl;
    }
    
    return 0;
}
