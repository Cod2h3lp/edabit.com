// Problem -> Check if number is less or equal to zero. 

#include <iostream> 

using namespace std; 

int check_function(int number) {

	if(number < 0 || number == 0) {
		return 1; 
	}else{
		return 0; 
	}
}

int main() {
	cout << check_function(6) << endl; 
return 0; 
}