#include <iostream>
using namespace std;

/* In C++, a friend function is a function that is not a member of a class
but is granted access to the private and protected members of that class. This allows the friend function to operate on the private members of the class as if it were a member of the class itself.
*/

class Boy {
	int privateData=23;
	public:
		friend void tell(Boy b);
};

void tell(Boy b){
	cout<<b.privateData;
}

int main(){
	Boy b;
	tell(b);
	return 0;
}
