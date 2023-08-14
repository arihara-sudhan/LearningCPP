#include <iostream>
using namespace std;

union Animal {
	int age;
	void eat(){
		cout<<"ATE"<<endl;
	}
};

int main(){
	Animal tiger, cat;
	tiger.age = 21;
	cat.age = 10;
	tiger.eat();
	cat.eat();
	return 0;
}
