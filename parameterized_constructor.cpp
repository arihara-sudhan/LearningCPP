#include <iostream>
using namespace std;

class Ari {
	int A,B;
	public:
		Ari(int a, int b){
			A = a;
			B = b;
		}
		void show(){
			cout<<A<<endl<<B<<endl;
		}
};

int main(){
	Ari ari1(2,3);
	Ari ari2(3,4);
	ari1.show();
	ari2.show();
	return 0;
}
