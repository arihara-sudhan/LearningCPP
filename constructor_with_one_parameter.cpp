#include <iostream>
using namespace std;

class Ari {
	int A;
	public:
		Ari(int a){
			A = a;
		}
		void show(){
			cout<<A<<endl;
		}
};

int main(){
	Ari ari1(2);
	Ari ari2 = 3; // SPECIAL WAY
	ari1.show();
	ari2.show();
	return 0;
}
