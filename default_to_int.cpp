#include <iostream>
using namespace std;

// RETURN TYPE IS NOT SPECIFIED
// DEFAULT TO INT
// NOT SUPPORTED IN STANDARD C++
func(int i){
	return i*i;
}

int main(){
	int num1 = 2;
	cout <<"\n"<<num1;
	float num2 = 3.2;
	cout <<"\n"<<num2;
	char name[10] = "ARIHARAN";
	cout <<"\n"<< name;
	cout <<"\n"<<func(2);
	return 0;
}