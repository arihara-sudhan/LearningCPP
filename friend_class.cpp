#include <iostream>
using namespace std;

class TwinBoy1 {
	int age = 21;
	public:
		friend class TwinBoy2;
};

class TwinBoy2 {
	public :
		int tellAge(TwinBoy1 t1);
};

int TwinBoy2::tellAge(TwinBoy1 t1){
	return t1.age;
}

int main(){
	TwinBoy2 t2;
	TwinBoy1 t1;
	cout<<t2.tellAge(t1);
}
