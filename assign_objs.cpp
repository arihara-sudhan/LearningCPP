#include <iostream>
using namespace std;

class Animal {
	public:
		int a;
		int b;
};

int main(){
	Animal obj1,obj2;
	obj1.a = 2;
	obj1.b = 3;
	obj2 = obj1;
	cout<<obj2.a<<endl<<obj2.b;
}
