// Problem -> Check if sum of two number is less then 100.

#include <iostream>

using namespace std; 

int lessThen100(int n1, int n2){

	int n3 = (n1 + n2); 
	if(n3 < 100) {
		return 1; 
	} else{
		return 0; 
	}
}

int main() {
   
   int sum = lessThen100(10,20);
   if(sum == 1) {
   	cout << "The sum is less then 100" << endl; 
   }else if(sum == 0){
   	cout << "The sum is more then 100" << endl; 
   }

return 0; 
}