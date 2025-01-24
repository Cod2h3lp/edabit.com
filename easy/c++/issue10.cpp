// Problem -> Reverse boolean value 

#include <iostream>

using namespace std; 

int reverse(bool value) {
	cout << value << endl; 
	return value; 
}
int main() {
	int value = reverse(false);
	if(value == 0) {
		cout << "True" << endl; 
	}else if(value == 1){
		cout << "False" << endl; 
	}
return 0; 
}