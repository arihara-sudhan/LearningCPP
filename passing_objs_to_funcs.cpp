#include <iostream>
using namespace std;

class Animal {
	public:
		int a;
		int b;
		Animal(int x,int y){
			a = x;
			b = y;
		}
};

void myF(Animal obj){
	cout<<obj.a<<endl<<obj.b<<endl;
}

int main(){
	Animal obj1(1,2);
	Animal obj2(3,4);
	Animal obj3(5,6);
	myF(obj1);
	myF(obj2);
	myF(obj3);
	return 0;
}
