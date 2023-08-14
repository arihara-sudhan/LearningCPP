#include <iostream>
using namespace std;

class Animal {
	public:
		int a;
};

Animal myF(){
	Animal obj;
	obj.a = 2;
	return obj;
}

int main(){
	Animal obj = myF();
	cout<<obj.a<<endl;
	return 0;
}
