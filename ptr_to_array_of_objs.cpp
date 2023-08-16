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
	mine o[3] = {1,2,3};
	mine *p = o;
	for(int i=0;i<3;i++){
		cout<< p->get() <<endl;
		p++;
	}
    return 0;
}
