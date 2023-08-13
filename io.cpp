#include <iostream>
using namespace std;

int main(){
	int num1;
	float num2;
	char name[10];
	cin >> num1;
	cin >> num2;
	cin >> name;	// STOPS READING ONCE A WHITESPACE IS ENCOUNTERED
	cout << "\nYou Entered INTEGER : "<< num1;
	cout << "\nYou Entered FLOAT : "<< num2;
	cout << "\nYou Entered STRING : "<< name;
	return 0;
}
