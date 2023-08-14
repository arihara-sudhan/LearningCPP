#include <iostream>
using namespace std;
/*
An inline function is a way to tell the compiler that you want
the function's code to be inserted directly into the place 
where the function is called, instead of making a separate function call.
This can make the code run faster because it avoids the overhead of 
the function call.
*/

inline void aFunc(){
	cout<<"HEY"<<endl;
}

int main(){
	aFunc();
	return 0;
}
